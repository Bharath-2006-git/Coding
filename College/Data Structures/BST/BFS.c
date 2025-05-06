#include <stdio.h>

#define MAX 20

int n;
int visited[MAX], queue[MAX], front = 0, rear = -1;
int adj[MAX][MAX];

// Breadth-First Search function
void bfs(int v) {
    int i;
    visited[v] = 1;
    queue[++rear] = v;

    while (front <= rear) {
        int current = queue[front++];

        for (i = 1; i <= n; i++) {
            if (adj[current][i] && !visited[i]) {
                queue[++rear] = i;
                visited[i] = 1;
            }
        }
    }
}

int main() {
    int i, j, v, reachable = 0;

    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    if (n >= MAX) {
        printf("Too many vertices. Max allowed is %d.\n", MAX - 1);
        return 1;
    }

    // Initialize arrays
    for (i = 1; i <= n; i++) {
        visited[i] = 0;
        queue[i] = 0;
    }

    // Read adjacency matrix
    printf("Enter graph data row by row (space-separated values):\n");
    for (i = 1; i <= n; i++) {
        printf("Enter edges from vertex %d to others: ", i);
        for (j = 1; j <= n; j++) {
            scanf("%d", &adj[i][j]);
        }
    }

    // Get starting vertex
    printf("Enter the starting vertex (1 to %d): ", n);
    scanf("%d", &v);

    if (v < 1 || v > n) {
        printf("Invalid starting vertex.\n");
        return 1;
    }

    bfs(v);

    // Output reachable nodes
    printf("The nodes which are reachable from vertex %d:\n", v);
    for (i = 1; i <= n; i++) {
        if (visited[i]) {
            printf("%d\t", i);
            reachable++;
        }
    }

    if (reachable < n) {
        printf("\n\nNot all nodes are reachable. Graph is not connected.\n");
    } else {
        printf("\n\nAll nodes are reachable. Graph is connected.\n");
    }

    return 0;
}
