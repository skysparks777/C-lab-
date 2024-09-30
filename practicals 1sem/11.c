#include <stdio.h>

int main() {
    // Simple for loop to calculate the sum of numbers from 1 to 10
    int sum = 0;

    for (int i = 1; i <= 10; ++i) {
        sum += i;
    }

    printf("Sum of numbers from 1 to 10: %d\n", sum);

    return 0;
}
