#include <stdio.h>

int main() {
    int a[10][10], n, i, j, isSymmetric = 1;

    printf("Enter size of square matrix (N): ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n && isSymmetric; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
    }

    if (isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}