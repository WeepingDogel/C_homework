import os
import subprocess
import re

# Path to labs and expected outputs
LABS_DIR = "./"
EXPECTED_OUTPUTS_FILE = os.path.join(LABS_DIR, "expected_outputs.txt")

def clean_output(output):
    """Clean program output by removing prompts and extra whitespace"""
    # Remove common prompt texts using regex patterns
    prompt_patterns = [
        r"Enter\s+(?:a\s+)?number:\s*",
        r"Enter\s+(?:the\s+)?size\s+of\s+(?:the\s+)?array:\s*",
        r"Enter\s+(?:the\s+)?(?:\d+\s+)?elements?:\s*",
        r"Enter\s+(?:the\s+)?number\s+of\s+elements?:\s*",
        r"Enter\s+(?:a\s+)?string:\s*",
        r"Enter\s+(?:the\s+)?number\s+of\s+vertices\s+and\s+edges:\s*",
        r"Enter\s+edge\s+\(u\s+v\):\s*",
        r"Enter\s+infix\s+expression:\s*",
        r"Enter\s+dimensions\s+of\s+matrix\s+[12]\s+\(rows\s+cols\):\s*",
        r"Enter\s+(?:the\s+)?number\s+of\s+terms:\s*",
        r"Enter\s+two\s+numbers:\s*",
        r"Enter\s+base\s+and\s+exponent:\s*",
        r"Enter\s+number\s+of\s+rotations:\s*",
        r"Enter\s+a\s+postfix\s+expression:\s*",
        r"Enter\s+the\s+number\s+of\s+nodes\s+in\s+the\s+binary\s+tree:\s*",
        r"Enter\s+first\s+string:\s*",
        r"Enter\s+second\s+string:\s*",
        r"Enter\s+the\s+number\s+up\s+to\s+which\s+you\s+want\s+to\s+find\s+primes:\s*",
    ]
    
    result = output
    for pattern in prompt_patterns:
        result = re.sub(pattern, '', result)
    
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

def get_test_input(lab_number):
    """Get test input for a specific lab"""
    inputs = {
        1: "5\n",                                    # Factorial
        2: "hello\n",                                # String reverse
        3: "5\n10 20 30 40 50\n",                   # Dynamic array
        4: "10 20\n",                                # Swap numbers
        5: "5\n5 3 8 6 2\n",                        # Bubble sort
        6: "3\n10 20 30\n",                         # Linked list
        7: "5\n50 30 70 20 40\n",                   # Binary search tree
        8: "5\n10 80 30 90 40\n",                   # Quick sort
        9: "6\n",                                    # Fibonacci
        10: "3\n1 3 5\n3\n2 4 6\n",                 # Merge arrays
        11: "3\n10 20 30\n",                        # Graph adjacency list
        12: "4\n4\n0 1\n1 2\n2 3\n3 0\n",          # DFS
        13: "123\n",                                 # Sum of digits
        14: "3\n10 20 30\n",                        # Stack
        15: "a+b*c\n",                              # Infix to postfix
        16: "4\n4\n0 1\n1 2\n2 3\n3 0\n",          # BFS
        17: "2 2\n1 2\n3 4\n2 2\n5 6\n7 8\n",      # Matrix multiplication
        18: "5\n1 2 3 4 5\n2\n",                    # Array rotation
        19: "48 18\n",                              # GCD
        20: "2 5\n",                                # Power calculation
        21: "2 3\n1 2 3\n4 5 6\n",                 # Matrix transpose
        22: "23+4*\n",                             # Postfix evaluation
        23: "3\n1 2 3\n",                          # Circular queue
        24: "10\n",                                # Prime numbers
        25: "3\napple\nbanana\napricot\n",         # Sort strings
        26: "5\n",                                 # Factorial recursive
        27: "madam\n",                             # Palindrome
        28: "5\n5 4 3 2 1\n",                     # Merge sort
        29: "ABCD\nACDB\n",                        # LCS
        30: "3\n10 20 30\n",                      # Hash table
        31: "5\n1 2 3 3 4\n",                     # Cycle detection
        32: "4\n1 1 0 0\n1 0 0 1\n0 0 1 1\n0 0 0 1\n",  # Islands
        33: "4\n1 2 3 4\n",                       # Tree depth
        34: "6\n7 10 4 3 20 15\n3\n",            # Kth smallest
        35: "2\nhello\nworld\nhello\n",           # Trie
        36: "5\n1 2 3 4 2\n",                     # Floyd cycle
        37: "5\n1 2 3 4 5\n",                     # Tree serialization
        38: "5\n20 2\n15 2\n10 1\n5 3\n1 3\n",   # Job scheduling
        39: "abcxabcdabxabcdabcdabcy\nabcdabcy\n", # Pattern matching
        40: "hit\ncog\n6\nhot dot dog lot log cog\n", # Word ladder
        41: "3\n3\n1 4 5\n3\n1 3 4\n2\n2 6\n",   # Merge K lists
        42: "5\n5\n0 1\n0 2\n1 2\n1 3\n3 4\n",   # Articulation points
        43: "8\n1 5 8 9 10 17 17 20\n",          # Rod cutting
        44: "9\n10 2 10 20 1 -25 3 4\n",         # Max path sum
        45: "6\n7 1 5 3 6 4\n",                  # Stock profit
        46: "6\n1 2 5 3 4 6\n",                  # Flatten tree
        47: "4\n4\n0 1\n1 2\n2 3\n3 0\n",       # Bipartite graph
        48: "abc\n",                             # Distinct substrings
        49: "4\n6\n0 1 10\n0 2 5\n1 2 15\n1 3 10\n2 3 10\n", # Max flow
        50: "2\n1 2\n3 4\n2\n5 6\n7 8\n"        # Strassen multiplication
    }
    return inputs.get(lab_number, "")

def load_expected_outputs():
    """Read and parse the expected outputs file"""
    expected_outputs = {}
    current_lab = None
    current_output = []
    collecting_output = False
    
    with open(EXPECTED_OUTPUTS_FILE, "r") as file:
        for line in file:
            line = line.strip()
            
            if not line or line.startswith('---'):
                if collecting_output and current_lab:
                    expected_outputs[current_lab] = clean_output('\n'.join(current_output))
                collecting_output = False
                current_output = []
                continue
            
            if line.startswith("## Lab-"):
                if collecting_output and current_lab:
                    expected_outputs[current_lab] = clean_output('\n'.join(current_output))
                current_lab = line.split(":")[0].strip()
                current_output = []
                collecting_output = False
                continue
            
            if line.startswith("Expected Output:"):
                collecting_output = True
                continue
            
            if collecting_output and not line.startswith("Input:"):
                current_output.append(line)
    
    if collecting_output and current_lab and current_output:
        expected_outputs[current_lab] = clean_output('\n'.join(current_output))
    
    return expected_outputs

def test_labs():
    """Test all labs in order from 1 to 50"""
    expected_outputs = load_expected_outputs()
    total_labs = 50
    passed_labs = 0
    lab_scores = {}  # Dictionary to store individual lab scores

    # Test labs in numerical order
    for lab_number in range(1, 51):
        lab_file = f"Lab-{lab_number:02d}.c"
        lab_name = f"## Lab-{lab_number:02d}"
        lab_path = os.path.join(LABS_DIR, f"Lab-{lab_number:02d}", lab_file)

        print(f"\nTesting Lab-{lab_number:02d}...")

        # Initialize score for this lab
        lab_scores[lab_number] = 0

        # Check if file exists
        if not os.path.exists(lab_path):
            print(f"Lab-{lab_number:02d}: Failed - File not found")
            continue

        # Check if we have expected output
        if lab_name not in expected_outputs:
            print(f"Lab-{lab_number:02d}: Failed - No expected output defined")
            continue

        # Compile
        compiled, executable = compile_program(lab_path)
        if not compiled:
            print(f"Lab-{lab_number:02d}: Failed - Compilation error")
            continue

        # Get test input and run
        test_input = get_test_input(lab_number)
        output = run_program(executable, test_input)
        if output is None:
            print(f"Lab-{lab_number:02d}: Failed - Runtime error")
            continue

        # Clean and compare output
        cleaned_output = clean_output(output)
        expected_output = expected_outputs[lab_name]
        
        if cleaned_output == expected_output:
            print(f"Lab-{lab_number:02d}: OK")
            passed_labs += 1
            lab_scores[lab_number] = 2  # 2 points for passing
        else:
            # Check for partial credit
            if len(cleaned_output) > 0 and compiled:
                lab_scores[lab_number] = 1  # 1 point for compiling and producing output
            print(f"Lab-{lab_number:02d}: Failed - Output mismatch")
            print(f"Expected:\n{expected_output}")
            print(f"Got:\n{cleaned_output}")

        # Clean up executable
        try:
            os.remove(executable)
        except:
            pass

    # Calculate total score
    max_possible_score = total_labs * 2  # 2 points per lab
    total_score = sum(lab_scores.values())
    percentage = (total_score / max_possible_score) * 100

    # Print summary
    print("\n=== Test Summary ===")
    print(f"Total Labs: {total_labs}")
    print(f"Passed: {passed_labs}")
    print(f"Failed: {total_labs - passed_labs}")
    print(f"Pass Rate: {(passed_labs/total_labs)*100:.2f}%")
    
    # Print score details
    print("\n=== Score Details ===")
    print("Lab Scores:")
    for lab_num in range(1, 51):
        score = lab_scores[lab_num]
        print(f"Lab-{lab_num:02d}: {score}/2 points")
    
    print("\n=== Final Score ===")
    print(f"Total Points: {total_score}/{max_possible_score}")
    print(f"Final Score: {percentage:.2f}%")
    
    # Grade calculation
    grade = "F"
    if percentage >= 90:
        grade = "A"
    elif percentage >= 80:
        grade = "B"
    elif percentage >= 70:
        grade = "C"
    elif percentage >= 60:
        grade = "D"
    
    print(f"Grade: {grade}")

    return passed_labs == total_labs

if __name__ == "__main__":
    success = test_labs()
    exit(0 if success else 1)
