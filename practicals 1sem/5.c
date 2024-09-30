#include <stdio.h>

int main() {
    double num1, num2, result;

    // Input the two numbers
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Check if the second number is not zero (division by zero is not allowed)
    if (num2 != 0) {
        if (num1 < num2) {
            // Swap num1 and num2 if num1 is smaller
            double temp = num1;
            num1 = num2;
            num2 = temp;
        }

        result = num1 / num2;
        printf("Result: %.2lf\n", result);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }

    return 0;
}
