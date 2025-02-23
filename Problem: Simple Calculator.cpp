#include <stdio.h>

int main() {
    double num1, num2, result;
    char oper;
    printf("Enter first number:");
    scanf("%lf", &num1);
    printf("Enter an operator: ");
    scanf(" %c", &oper);
    printf("Enter second number:");
    scanf("%lf", &num2);
    switch (oper) {
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
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }
    printf("Result: %.2lf\n", result);

    return 0;
}
