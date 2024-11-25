#include <stdio.h>
#include <stdbool.h>
#define MAX 100

int graph[MAX][MAX];
bool visited[MAX];
int disc[MAX], low[MAX], parent[MAX];
bool ap[MAX]; // To store articulation points

void findArticulationPoints(int u, int vertices) {
    // TODO: Implement logic to find articulation points
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

    for (int i = 0; i < vertices; i++) {
        if (!visited[i]) {
        
