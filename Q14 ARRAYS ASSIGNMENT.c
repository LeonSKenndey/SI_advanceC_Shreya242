#include <stdio.h>

int main() {
    int a[10][10], t[10][10];
    int m, n, i, j;

    printf("Enter number of rows (M): ");
    scanf("%d", &m);

    printf("Enter number of columns (N): ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            t[j][i] = a[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}