#include <stdio.h>
#include <stdlib.h>

// Edge structure
struct Edge {
    int src, dest, weight;
};

// Function to implement Kruskal’s algorithm
void kruskal(struct Edge edges[], int vertices, int edgesCount) {
    // TODO: Implement Kruskal's algorithm
}

int main() {
    int vertices, edgesCount;
    printf("Enter the number of vertices and edges: ");
    scanf("%d %d", &vertices, &edgesCount);

    struct Edge edges[edgesCount];

    // Input edges
    for (int i = 0; i < edgesCount; i++) {
        printf("Enter edge (src dest weight): ");
        scanf("%d %d %d", &edges[i].src, &edges[i].dest, &edges[i].weight);
    }

    kruskal(edges, vertices, edgesCount);

    return 0;
}
