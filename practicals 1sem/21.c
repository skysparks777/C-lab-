#include <stdio.h>

// Function declaration
void greetUser(const char *name);

int main() {
    // Calling the function with an argument
    greetUser("Prashita");

    return 0;
}

// Function definition
void greetUser(const char *name) {
    // Function prints a greeting using the provided name
    printf("Hello, %s! Welcome to the program.\n", name);
}
