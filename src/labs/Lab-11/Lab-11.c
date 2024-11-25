#include <stdio.h>
#include <stdlib.h>

// Structure to represent a node in the adjacency list
struct Node {
    int vertex;
    struct Node* next;
};

// Structure to represent the graph
struct Graph {
    int numVertices;
    struct Node** adjLists;
};

// Function to create a graph
struct Graph* createGraph(int vertices) {
    // TODO: Allocate memory for the graph and initialize adjacency lists
}

// Function to create a new node
struct Node* createNode(int vertex) {
    // TODO: Allocate memory for a new node
}

// Function to add an edge to the graph
void addEdge(struct Graph* graph, int src, int dest) {
    // TODO: Add an edge to the adjacency list
}

// Function to print the graph
void printGraph(struct Graph* graph) {
    // TODO: Traverse and print the adjacency lists
}

int main() {
    int vertices = 5;
    struct Graph* graph = createGraph(vertices);

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);

    printGraph(graph);

    return 0;
}
