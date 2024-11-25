#include <stdio.h>
#include <stdbool.h>
#define MAX 100

int graph[MAX][MAX];
bool visited[MAX];
int componentSize;

void DFS(int vertex, int vertices) {
    // TODO: Implement DFS to calculate component size
}

int largestConnectedComponent(int vertices) {
    int maxSize = 0;

    for (int i = 0; i < vertices; i++) {
        if (!visited[i]) {
            componentSize = 0;
            DFS(i, vertices);
            if (componentSize > maxSize) {
                maxSize = componentSize;
            }
        }
    }

    return maxSize;
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

    printf("Largest Connected Component Size: %d\n", largestConnectedComponent(vertices));

    return 0;
}
