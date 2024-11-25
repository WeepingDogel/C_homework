#include <stdio.h>

void printGraph(int graph[10][10], int vertices) {
    // TODO: Implement logic to print the adjacency matrix
}

int main() {
    int graph[10][10] = {0};
    int vertices, edges, u, v;

    printf("Enter the number of vertices and edges: ");
    scanf("%d %d", &vertices, &edges);

    printf("Enter edges (u v):\n");
    for (int i = 0; i < edges; i++) {
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
        graph[v][u] = 1; // For undirected graph
    }

    printf("Adjacency Matrix:\n");
    printGraph(graph, vertices);

    return 0;
}
