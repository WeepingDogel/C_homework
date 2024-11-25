#include <stdio.h>
#include <stdlib.h>

// Define Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to reverse the linked list
struct Node* reverseList(struct Node* head) {
    // TODO: Implement logic to reverse the linked list
}

// Helper functions to create and print the list
void appendNode(struct Node** head, int data);
void displayList(struct Node* head);

int main() {
    struct Node* head = NULL;

    appendNode(&head, 10);
    appendNode(&head, 20);
    appendNode(&head, 30);

    printf("Original list: ");
    displayList(head);

    head = reverseList(head);

    printf("Reversed list: ");
    displayList(head);

    return 0;
}
