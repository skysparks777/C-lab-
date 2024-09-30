#include <stdio.h>

int main() {
    int n;

    // Prompt user for input
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Validate input to ensure n is positive
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;  // Exit with an error code
    }

    // Simple while loop to print numbers from 1 to n
    int i = 1;

    while (i <= n) {
        printf("%d\n", i);
        ++i;
    }

    return 0;
}
