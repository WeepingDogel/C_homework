#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define ALPHABET_SIZE 26

// Define Trie Node structure
struct TrieNode {
    struct TrieNode* children[ALPHABET_SIZE];
    bool isEndOfWord;
};

// Function prototypes
struct TrieNode* createNode();
void insert(struct TrieNode* root, char* word);
bool search(struct TrieNode* root, char* word);
bool delete(struct TrieNode* root, char* word, int depth);

int main() {
    struct TrieNode* root = createNode();

    insert(root, "hello");
    insert(root, "world");

    printf("Search for 'hello': %s\n", search(root, "hello") ? "Found" : "Not Found");
    printf("Search for 'world': %s\n", search(root, "world") ? "Found" : "Not Found");

    delete(root, "hello", 0);
    printf("Search for 'hello' after deletion: %s\n", search(root, "hello") ? "Found" : "Not Found");

    return 0;
}
