#include <stdio.h>

// Function declaration
int getRandomNumber(void);

int main() {
    // Calling the function and printing the result
    printf("Random Number: %d\n", getRandomNumber());

    return 0;
}

// Function definition
int getRandomNumber(void) {
    // Function returns a random number (for simplicity, using a constant value here)
    return 42;
}
