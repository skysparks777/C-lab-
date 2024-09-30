#include <stdio.h>

int main() {
    // Using a for loop with a continue statement to print even numbers
    for (int i = 1; i <= 10; ++i) {
        // Skip odd numbers using continue statement
        if (i % 2 != 0) {
            continue;
        }
        
        printf("%d\n", i);
    }

    return 0;
}
