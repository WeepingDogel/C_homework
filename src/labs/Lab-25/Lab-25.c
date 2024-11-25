#include <stdio.h>
#include <limits.h>
#define MAX 100

int graph[MAX][MAX];
int dist[MAX];
int visited[MAX];

// Find the vertex with the minimum distance
int minDistance(int vertices) {
    // TODO: Implement logic to find the minimum distance vertex
}

// Dijkstra’s algorithm
void dijkstra(int vertices, int src) {
    // TODO: Implement Dijkstra’s algorithm
}

int main() {
    int vertices, edges, u, v, weight;

    printf("Enter the number of vertices and edges: ");
    scanf("%d %d", &vertices, &edges);

    // Input edges
    for (int i = 0; i < edges; i++) {
        printf("Enter edge (u v weight): ");
        scanf("%d %d %d", &u, &v, &weight);
        graph[u][v] = weight;
        graph[v][u] = weight;
    }

    // Perform Dijkstra’s algorithm
    printf("Enter the source vertex: ");
    int src;
    scanf("%d", &src);

    dijkstra(vertices, src);

    return 0;
}
