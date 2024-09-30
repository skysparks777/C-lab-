#include <stdio.h>

// Function declaration
int addNumbers(int a, int b);

int main() {
    // Calling the function with arguments and printing the result
    int result = addNumbers(5, 7);
    printf("Sum: %d\n", result);

    return 0;
}

// Function definition
int addNumbers(int a, int b) {
    // Function returns the sum of two numbers
    int sum = a + b;
    return sum;
}
