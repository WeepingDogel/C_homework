#include <stdio.h>
#define INF 1000000
#define MAX 20

int tsp(int graph[MAX][MAX], int n) {
    // TODO: Implement TSP using dynamic programming
}

int main() {
    int n, graph[MAX][MAX];
    printf("Enter the number of cities: ");
    scanf("%d", &n);

    printf("Enter the cost matrix (use %d for no path):\n", INF);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Minimum cost: %d\n", tsp(graph, n));

    return 0;
}
