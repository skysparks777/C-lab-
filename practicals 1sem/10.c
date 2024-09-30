#include <stdio.h>

int main() {
    int k, l;

    // Input the numbers
    printf("Enter the first number: ");
    scanf("%d", &k);

    printf("Enter the second number: ");
    scanf("%d", &l);

    // Determine which is the greater number
    if (k > l) 
    {
        printf("The greater number is: %d\n", k);
    } 
    else if (l > k)
     {
        printf("The greater number is: %d\n", l);
    } 
    else 
    {
        printf("Both numbers are equal.\n");
    }

    return 0;
}