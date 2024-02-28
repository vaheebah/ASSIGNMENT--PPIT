#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    printf("this is a calculator");
    // Ask user to enter operator i.e., +, -, *, /
    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &operator);

    // Ask user to enter two operands
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform operation based on operator
    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Check if num2 is not zero to avoid division by zero error
            if(num2 != 0)
                result = num1 / num2;
            else {
                printf("Error! Division by zero.\n");
                return 1; // Exit with error code 1
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
            return 1; // Exit with error code 1
    }

    // Print the result
    printf("Result: %.2lf\n", result);

    return 0;
}
// Calculator
// first test
