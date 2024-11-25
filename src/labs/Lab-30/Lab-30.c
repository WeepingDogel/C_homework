#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to insert a node at the end
void insertAtEnd(struct Node** head, int data) {
    // TODO: Implement insertion logic
}

// Function to delete a node
void deleteNode(struct Node** head, int key) {
    // TODO: Implement deletion logic
}

// Function to display the list
void displayList(struct Node* head) {
    // TODO: Traverse and print the doubly linked list
}

int main() {
    struct Node* head = NULL;

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);

    printf("Doubly Linked List: ");
    displayList(head);

    deleteNode(&head, 20);

    printf("After deletion: ");
    displayList(head);

    return 0;
}
