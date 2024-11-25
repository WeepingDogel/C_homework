#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the end
void insertAtEnd(struct Node** head, int data) {
    // TODO: Implement the logic to insert a node at the end
}

// Function to display the linked list
void displayList(struct Node* head) {
    // TODO: Traverse and print the linked list
}

int main() {
    struct Node* head = NULL;

    // Insert elements
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);

    // Display the list
    printf("Linked List: ");
    displayList(head);

    return 0;
}
