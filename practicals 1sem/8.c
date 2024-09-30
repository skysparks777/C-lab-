#include <stdio.h>

int main()
 {
    int x, y;

    
    printf("Enter the first number: ");// inputing the 1st value 
    scanf("%d", &x);

    printf("Enter the second number: ");// inputing the 2nd value 
    scanf("%d", &y);

    x = x + y;
    y = x - y;
    x = x - y;

    // Display the swapped numbers
    printf("After swapping, the first number is: %d\n", x);
    printf("After swapping, the second number is: %d\n", y);

    return 0;
}