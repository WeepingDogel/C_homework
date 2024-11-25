import os
import subprocess
import re

# Path to tests and expected outputs
TESTS_DIR = "./"
EXPECTED_OUTPUTS_FILE = os.path.join(TESTS_DIR, "expected_outputs.txt")

def clean_output(output):
    """Clean program output by removing prompts and extra whitespace"""
    prompts = [
        "Enter a decimal number: ",
        "Enter the number up to which you want to find primes: ",
        "Enter N: ",
        "Enter string: ",
        "Enter matrix dimensions: ",
        "Enter vertices and edges: ",
        "Enter the array elements: ",
        "Enter the pattern: ",
        "Enter the text: ",
        "Enter capacity: ",
    ]
    
    result = output
    for prompt in prompts:
        result = result.replace(prompt, "")
    
    # Remove extra whitespace and normalize line endings
    result = re.sub(r'\s+', ' ', result).strip()
    return result

def compile_program(c_file):
    """Compile a C program"""
    executable = c_file.replace(".c", ".out")
    try:
        subprocess.run(["gcc", c_file, "-o", executable], check=True, stderr=subprocess.PIPE)
        return True, executable
    except subprocess.CalledProcessError as e:
        print(f"Compilation failed for {c_file}: {e.stderr.decode()}")
        return False, None

def run_program(executable, input_data=None):
    """Run the compiled program and capture output"""
    try:
        process = subprocess.run(
            [executable],
            input=input_data,
            text=True,
            capture_output=True,
            timeout=5  # 5 second timeout
        )
        return process.stdout.strip()
    except subprocess.TimeoutExpired:
        print(f"Program {executable} timed out")
        return None
    except Exception as e:
        print(f"Error running {executable}: {e}")
        return None

def get_test_input(test_number):
    """Get test input for a specific test"""
    inputs = {
        1: "42\n",                                   # Decimal to Binary
        2: "10\n",                                   # Sieve of Eratosthenes
        3: "3\n10\n20\n30\n1\n",                    # Queue using stacks
        4: "4\n",                                    # N-Queens
        5: "cat\ncar\ncat\n",                        # Trie implementation
        6: "2 2\n1 2\n3 4\n5 6\n7 8\n",            # Matrix addition
        7: "4\n3\n0 1\n0 2\n1 2\n",                 # Adjacency matrix
        8: "3\n5\n1\n",                             # LCA in binary tree
        9: "3\napple\nbanana\napricot\n",           # Sort strings
        10: "3\n2 3 4\n4 5 7\n5\n",                # Knapsack problem
        # Add inputs for Test-11 to Test-50...
    }
    return inputs.get(test_number, "")

def load_expected_outputs():
    """Read and parse the expected outputs file"""
    expected_outputs = {}
    current_test = None
    current_output = []
    collecting_output = False
    
    with open(EXPECTED_OUTPUTS_FILE, "r") as file:
        for line in file:
            line = line.strip()
            
            if not line or line.startswith('---'):
                if collecting_output and current_test:
                    expected_outputs[current_test] = clean_output('\n'.join(current_output))
                collecting_output = False
                current_output = []
                continue
            
            if line.startswith("## Test-"):
                if collecting_output and current_test:
                    expected_outputs[current_test] = clean_output('\n'.join(current_output))
                current_test = line.split(":")[0].strip()
                current_output = []
                collecting_output = False
                continue
            
            if line.startswith("Expected Output:"):
                collecting_output = True
                continue
            
            if collecting_output and not line.startswith("Input:"):
                current_output.append(line)
    
    if collecting_output and current_test and current_output:
        expected_outputs[current_test] = clean_output('\n'.join(current_output))
    
    return expected_outputs

def test_implementations():
    """Test all implementations in order from 1 to 50"""
    expected_outputs = load_expected_outputs()
    total_tests = 50
    passed_tests = 0
    test_scores = {}

    # Test implementations in numerical order
    for test_number in range(1, 51):
        test_file = f"Test-{test_number:02d}.c"
        test_name = f"## Test-{test_number:02d}"
        test_path = os.path.join(TESTS_DIR, f"Test-{test_number:02d}", test_file)

        print(f"\nTesting Test-{test_number:02d}...")

        # Initialize score for this test
        test_scores[test_number] = 0

        # Check if file exists
        if not os.path.exists(test_path):
            print(f"Test-{test_number:02d}: Failed - File not found")
            continue

        # Check if we have expected output
        if test_name not in expected_outputs:
            print(f"Test-{test_number:02d}: Failed - No expected output defined")
            continue

        # Compile
        compiled, executable = compile_program(test_path)
        if not compiled:
            print(f"Test-{test_number:02d}: Failed - Compilation error")
            continue

        # Get test input and run
        test_input = get_test_input(test_number)
        output = run_program(executable, test_input)
        if output is None:
            print(f"Test-{test_number:02d}: Failed - Runtime error")
            continue

        # Clean and compare output
        cleaned_output = clean_output(output)
        expected_output = expected_outputs[test_name]
        
        if cleaned_output == expected_output:
            print(f"Test-{test_number:02d}: OK")
            passed_tests += 1
            test_scores[test_number] = 2  # 2 points for passing
        else:
            # Check for partial credit
            if len(cleaned_output) > 0 and compiled:
                test_scores[test_number] = 1  # 1 point for compiling and producing output
            print(f"Test-{test_number:02d}: Failed - Output mismatch")
            print(f"Expected:\n{expected_output}")
            print(f"Got:\n{cleaned_output}")

        # Clean up executable
        try:
            os.remove(executable)
        except:
            pass

    # Print summary
    print("\n=== Test Summary ===")
    print(f"Total Tests: {total_tests}")
    print(f"Passed: {passed_tests}")
    print(f"Failed: {total_tests - passed_tests}")
    print(f"Pass Rate: {(passed_tests/total_tests)*100:.2f}%")
    
    # Print score details
    print("\n=== Score Details ===")
    print("Test Scores:")
    for test_num in range(1, 51):
        score = test_scores[test_num]
        print(f"Test-{test_num:02d}: {score}/2 points")
    
    print("\n=== Final Score ===")
    total_score = sum(test_scores.values())
    max_score = total_tests * 2
    percentage = (total_score / max_score) * 100
    print(f"Total Points: {total_score}/{max_score}")
    print(f"Final Score: {percentage:.2f}%")

    return passed_tests == total_tests

if __name__ == "__main__":
    success = test_implementations()
    exit(0 if success else 1)
