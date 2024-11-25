#include <stdio.h>
#include <stdbool.h>
#define MAX 100

int graph[MAX][MAX];
int color[MAX];

bool isBipartite(int vertices) {
    // TODO: Implement BFS to check if the graph is bipartite
}

int main() {
    int vertices, edges, u, v;

    printf("Enter the number of vertices and edges: ");
    scanf("%d %d", &vertices, &edges);

    for (int i = 0; i < edges; i++) {
        printf("Enter edge (u v): ");
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    if (isBipartite(vertices)) {
        printf("The graph is bipartite.\n");
    } else {
        printf("The graph is not bipartite.\n");
    }

    return 0;
}
