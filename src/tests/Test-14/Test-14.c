#include <stdio.h>
#include <stdbool.h>
#define MAX 100

int graph[MAX][MAX];
bool visited[MAX];

void DFS(int vertex, int vertices) {
    // TODO: Implement DFS traversal
}

int countConnectedComponents(int vertices) {
    // TODO: Implement logic to count connected components
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

    printf("Number of connected components: %d\n", countConnectedComponents(vertices));

    return 0;
}
