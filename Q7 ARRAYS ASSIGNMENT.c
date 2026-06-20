#include <stdio.h>

int main() {
    int arr[100];
    int n, i, max, min;
    double sum = 0.0, average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];

    for (i = 0; i < n; i++) {
        sum += arr[i];

        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    average = sum / n;

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);
    printf("Average = %.2f\n", average);

    return 0;
}