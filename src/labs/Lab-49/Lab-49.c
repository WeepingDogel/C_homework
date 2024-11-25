#include <stdio.h>
#define MAX 100
#define INF 1000000

void primsAlgorithm(int graph[MAX][MAX], int vertices) {
    // TODO: Implement Prim's algorithm
}

int main() {
    int vertices, graph[MAX][MAX];

    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    printf("Enter the adjacency matrix (use %d for no edge):\n", INF);
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    primsAlgorithm(graph, vertices);

    return 0;
}
