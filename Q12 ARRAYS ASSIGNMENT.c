#include <stdio.h>

int main() {
    int m, n, i, j;
    int a[10][10], b[10][10], sum[10][10], diff[10][10];

    printf("Enter number of rows (M): ");
    scanf("%d", &m);

    printf("Enter number of columns (N): ");
    scanf("%d", &n);

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("Matrix Addition:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("Matrix Subtraction:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}