#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, simple, compound;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    simple = (principal * rate * time) / 100;
    compound = principal * pow(1 + (rate / 100), time) - principal;

    printf("\nSimple Interest = %.2f\n", simple);
    printf("Compound Interest = %.2f\n", compound);

    return 0;
}