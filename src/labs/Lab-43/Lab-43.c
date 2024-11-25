#include <stdio.h>
#define INF 1000000
#define MAX 100

void floydWarshall(int graph[MAX][MAX], int vertices) {
    // TODO: Implement Floyd-Warshall algorithm
}

int main() {
    int vertices, graph[MAX][MAX];

    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    printf("Enter the adjacency matrix (use %d for INF):\n", INF);
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    floydWarshall(graph, vertices);

    return 0;
}
