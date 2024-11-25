#include <stdio.h>
#include <stdbool.h>
#define MAX 100

int graph[MAX][MAX];
bool visited[MAX];
int queue[MAX], front = -1, rear = -1;

// Function to enqueue
void enqueue(int vertex) {
    // TODO: Implement enqueue operation
}

// Function to dequeue
int dequeue() {
    // TODO: Implement dequeue operation
}

// Function to perform BFS
void BFS(int start) {
    // TODO: Implement BFS traversal logic
}

int main() {
    int vertices, edges, u, v;

    printf("Enter the number of vertices and edges: ");
    scanf("%d %d", &vertices, &edges);

    // Input edges
    for (int i = 0; i < edges; i++) {
        printf("Enter edge (u v): ");
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    // Perform BFS
    printf("BFS Traversal: ");
    BFS(0);

    return 0;
}
