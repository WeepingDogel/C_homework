#include <stdio.h>
#include <limits.h>

void bellmanFord(int graph[][3], int vertices, int edges, int source) {
    // TODO: Implement Bellman-Ford algorithm
}

int main() {
    int vertices, edges;
    printf("Enter the number of vertices and edges: ");
    scanf("%d %d", &vertices, &edges);

    int graph[edges][3];
    printf("Enter edges (u v weight):\n");
    for (int i = 0; i < edges; i++) {
        scanf("%d %d %d", &graph[i][0], &graph[i][1], &graph[i][2]);
    }

    printf("Enter the source vertex: ");
    int source;
    scanf("%d", &source);

    bellmanFord(graph, vertices, edges, source);

    return 0;
}
