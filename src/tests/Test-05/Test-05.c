#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ALPHABET_SIZE 26

// Trie Node structure
struct TrieNode {
    struct TrieNode* children[ALPHABET_SIZE];
    bool isEndOfWord;
};

// Function to create a new Trie node
struct TrieNode* createNode() {
    // TODO: Implement logic to allocate memory for a Trie node
}

// Insert a word into the Trie
void insert(struct TrieNode* root, char* word) {
    // TODO: Implement logic to insert a word into the Trie
}

// Search for a word in the Trie
bool search(struct TrieNode* root, char* word) {
    // TODO: Implement logic to search for a word
}

int main() {
    struct TrieNode* root = createNode();

    insert(root, "cat");
    insert(root, "car");
    insert(root, "dog");

    printf("Search for 'cat': %s\n", search(root, "cat") ? "Found" : "Not Found");
    printf("Search for 'bat': %s\n", search(root, "bat") ? "Found" : "Not Found");

    return 0;
}
