#include <stdio.h>

int main(void) {
    int a;
    float b;
    char c;

    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter a float: ");
    scanf("%f", &b);

    printf("Enter a character: ");
    scanf(" %c", &c);   // note the space before %c to skip whitespace

    printf("\nInteger: %d\n", a);
    printf("Float: %.2f\n", b);
    printf("Character: %c\n", c);

    return 0;
}