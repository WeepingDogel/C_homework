#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define Node structure
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

int height(struct Node* node) {
    // TODO: Calculate the height of the tree
}

bool isBalanced(struct Node* root) {
    // TODO: Implement logic to check if the tree is balanced
}

int main() {
    struct Node* root = NULL;
    // TODO: Build a binary tree and call isBalanced()

    return 0;
}
