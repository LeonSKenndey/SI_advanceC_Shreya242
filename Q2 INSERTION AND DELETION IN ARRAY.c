#include <stdio.h>

int main() {
    int arr[100], n, i, pos, val, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\n1. Insert\n2. Delete\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter position to insert (1 to %d): ", n + 1);
        scanf("%d", &pos);

        printf("Enter value to insert: ");
        scanf("%d", &val);

        if (pos < 1 || pos > n + 1) {
            printf("Invalid position\n");
            return 0;
        }

        for (i = n; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }

        arr[pos - 1] = val;
        n++;

        printf("Array after insertion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }
    else if (choice == 2) {
        printf("Enter position to delete (1 to %d): ", n);
        scanf("%d", &pos);

        if (pos < 1 || pos > n) {
            printf("Invalid position\n");
            return 0;
        }

        for (i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        n--;

        printf("Array after deletion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }
    else {
        printf("Invalid choice\n");
    }

    return 0;
}