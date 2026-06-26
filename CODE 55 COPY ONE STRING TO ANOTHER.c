#include <stdio.h>

int main() {
    char source[100], target[100];
    int i = 0;

    printf("Enter a string: ");
    gets(source);

    while (source[i] != '\0') {
        target[i] = source[i];
        i++;
    }
    target[i] = '\0';

    printf("Copied string: %s\n", target);

    return 0;
}