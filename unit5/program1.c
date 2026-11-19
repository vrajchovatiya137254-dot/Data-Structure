
#include <stdio.h>

int main() {
    int a[10][10], visited[10] = {0};
    int queue[10], n, i, j;
    int front = 0, rear = -1;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    queue[++rear] = 0;
    visited[0] = 1;

    printf("BFS Traversal: ");

    while(front <= rear) {
        int v = queue[front++];
        printf("%d ", v);

        for(i = 0; i < n; i++) {
            if(a[v][i] == 1 && visited[i] == 0) {
                queue[++rear] = i;
                visited[i] = 1;
            }
        }
    }

    return 0;
}
