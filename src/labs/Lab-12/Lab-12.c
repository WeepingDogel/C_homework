#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define the graph and visited array
#define MAX 100
int graph[MAX][MAX];
bool visited[MAX];

// Function to perform DFS
void DFS(int vertex) {
    // TODO: Implement DFS traversal logic
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

    // Perform DFS
    printf("DFS Traversal: ");
    DFS(0);

    return 0;
}
