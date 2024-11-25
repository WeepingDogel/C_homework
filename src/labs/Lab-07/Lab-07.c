#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) {
    // TODO: Allocate memory for a new node and initialize it
}

// Function to insert a node into the BST
struct Node* insert(struct Node* root, int data) {
    // TODO: Implement insertion logic for the BST
}

// Function for in-order traversal
void inOrderTraversal(struct Node* root) {
    // TODO: Traverse the BST in in-order (Left, Root, Right)
}

int main() {
    struct Node* root = NULL;

    // Insert elements into the BST
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);

    // Perform in-order traversal
    printf("In-order Traversal: ");
    inOrderTraversal(root);
    printf("\n");

    return 0;
}
