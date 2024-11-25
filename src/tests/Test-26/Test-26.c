#include <stdio.h>
#include <stdbool.h>
#define MAX 100

int graph[MAX][MAX];
int inDegree[MAX];

void topologicalSort(int vertices) {
    // TODO: Implement Kahn’s algorithm for topological sorting
}

int main() {
    int vertices, edges, u, v;

    printf("Enter the number of vertices and edges: ");
    scanf("%d %d", &vertices, &edges);

    for (int i = 0; i < edges; i++) {
        printf("Enter edge (u v): ");
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
        inDegree[v]++;
    }

    printf("Topological Sort: ");
    topologicalSort(vertices);

    return 0;
}
