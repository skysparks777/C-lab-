#include <stdio.h>

int main() {
    int number;

     printf("Enter a number: ");// Input a number
    scanf("%d", &number);

    // Check if the number is negative
    if (number < 0)
     {
        printf("The number is negative: %d\n", number);
    }

    return 0;
}