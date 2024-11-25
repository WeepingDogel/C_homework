#include <stdio.h>
#define MAX 100

int grid[MAX][MAX];
int visited[MAX][MAX];

// Perform DFS to traverse an island
void dfs(int x, int y, int rows, int cols) {
    // TODO: Implement DFS logic
}

// Count the number of islands
int countIslands(int rows, int cols) {
    // TODO: Implement logic to count islands
}

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter grid values (0 for water, 1 for land):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    printf("Number of islands: %d\n", countIslands(rows, cols));

    return 0;
}
