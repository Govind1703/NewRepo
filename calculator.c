#include <stdio.h>

int main() {
    char op;
    double num1, num2, result;

    // Display menu
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);  // space before %c to ignore newline

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform operation
    switch(op) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero!\n");
                return 1;
            }
            break;
        default:
            printf("Error: Invalid operator!\n");
            return 1;
    }

    printf("Result: %.2lf\n", result);
    return 0;
}