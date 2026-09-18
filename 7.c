#include <stdio.h>
#include <math.h>

int main() {
    int principal, rate, time;
    float simpleInterest, compoundInterest;

    printf("Enter principal amount: ");
    if (scanf("%d", &principal) != 1) {
        printf("Error: Please enter an integer value only.\n");
        return 1;
    }

    printf("Enter rate of interest: ");
    if (scanf("%d", &rate) != 1) {
        printf("Error: Please enter an integer value only.\n");
        return 1;
    }

    printf("Enter time in years: ");
    if (scanf("%d", &time) != 1) {
        printf("Error: Please enter an integer value only.\n");
        return 1;
    }

    if (principal <= 0 || rate <= 0 || time <= 0) {
        printf("Error: Principal, rate and time must be greater than 0.\n");
        return 1;
    }

    simpleInterest = (principal * rate * time) / 100.0;

    compoundInterest = principal * pow((1 + rate / 100.0), time) - principal;

    printf("Simple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}
