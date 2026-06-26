#include <stdio.h>

int main() {
    int n, r, i, choice;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Choose rotation direction:\n");
    printf("1. Left\n2. Right\n");
    scanf("%d", &choice);

    printf("Enter number of positions to rotate: ");
    scanf("%d", &r);

    r = r % n;

    if (choice == 1) {
        for (i = 0; i < r; i++) {
            int first = arr[0];
            for (int j = 0; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            arr[n - 1] = first;
        }
    } else if (choice == 2) {
        for (i = 0; i < r; i++) {
            int last = arr[n - 1];
            for (int j = n - 1; j > 0; j--) {
                arr[j] = arr[j - 1];
            }
            arr[0] = last;
        }
    } else {
        printf("Invalid choice!\n");
        return 0;
    }

    printf("Rotated array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}