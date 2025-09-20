#include <stdio.h>

// Recursive function to calculate factorial
long long factorial(int n) {
    if (n < 0) return -1;  // Invalid for negative
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    long long fact;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    fact = factorial(num);

    if (fact == -1) {
        printf("Error: Factorial not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %lld\n", num, fact);
    }

    return 0;
}