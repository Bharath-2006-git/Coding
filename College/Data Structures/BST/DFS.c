#include <stdio.h>

int adj[20][20], visited[20], n;

// Depth-First Search
void dfs(int v) {
    int i;
    visited[v] = 1;
    for (i = 1; i <= n; i++) {
        if (adj[v][i] && !visited[i]) {
            printf("%d -> %d\n", v, i);
            dfs(i);
        }
    }
}

int main() {
    int i, j, start, reachable = 0;

    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    // Initialize visited array
    for (i = 1; i <= n; i++) {
        visited[i] = 0;
    }

    // Read adjacency matrix
    printf("Enter graph data row by row (space-separated values):\n");
    for (i = 1; i <= n; i++) {
        printf("Enter edges from vertex %d to others: ", i);
        for (j = 1; j <= n; j++) {
            scanf("%d", &adj[i][j]);
        }
    }

    // Starting vertex for DFS
    printf("Enter the starting vertex: ");
    scanf("%d", &start);

    printf("\nDFS traversal:\n");
    dfs(start);

    // Check reachability
    printf("\nReachable nodes from vertex %d:\n", start);
    for (i = 1; i <= n; i++) {
        if (visited[i]) {
            printf("%d\t", i);
            reachable++;
        }
    }

    if (reachable < n) {
        printf("\n\nDFS is not possible to reach all nodes. Graph is not connected.\n");
    } else {
        printf("\n\nAll nodes are reachable. Graph is connected.\n");
    }

    return 0;
}
