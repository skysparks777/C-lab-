#include <stdio.h>

int main() {
    int num = 42;
    int *ptr1 = &num;
    int **ptr2 = &ptr1;

    // Printing values using pointer to pointer
    printf("Value of num: %d\n", **ptr2);
    printf("Address of num: %p\n", *ptr2);

    // Modifying the value using pointer to pointer
    **ptr2 = 100;

    // Printing the modified value
    printf("Modified value of num: %d\n", num);

    return 0;
}
