#include <stdio.h>
#include <stdbool.h>
#define MAX 100

int graph[MAX][MAX];
int residualGraph[MAX][MAX];

int fordFulkerson(int source, int sink, int vertices) {
    // TODO: Implement Ford-Fulkerson algorithm
}

int main() {
    int vertices, edges, u, v, capacity;

    printf("Enter the number of vertices and edges: ");
    scanf("%d %d", &vertices, &edges);

    for (int i = 0; i < edges; i++) {
        printf("Enter edge (u v capacity): ");
        scanf("%d %d %d", &u, &v, &capacity);
        graph[u][v] = capacity;
    }

    printf("Maximum flow: %d\n", fordFulkerson(0, vertices - 1, vertices));

    return 0;
}
