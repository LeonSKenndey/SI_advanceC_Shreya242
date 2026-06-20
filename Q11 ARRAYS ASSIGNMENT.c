#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100], n, i;
    int largest, secondLargest;
    int foundSecond = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = secondLargest = INT_MIN;

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    printf("Largest element = %d\n", largest);

    if (secondLargest == INT_MIN) {
        printf("Second largest element does not exist\n");
    } else {
        printf("Second largest element = %d\n", secondLargest);
    }

    return 0;
}