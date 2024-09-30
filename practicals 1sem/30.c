#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n;

    // Input the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Dynamically allocate memory for an array of integers using malloc
    arr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation is successful
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit with an error code
    }

    // Display a message indicating successful memory allocation
    printf("Memory successfully allocated for an array of %d integers.\n", n);

    // Deallocate the dynamically allocated memory
    free(arr);

    // Display a message indicating successful memory deallocation
    printf("Memory successfully deallocated.\n");

    return 0;
}
