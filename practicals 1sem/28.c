#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    // Input the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    // Dynamically allocate memory for an array of integers using calloc
    int *arr = (int *)calloc(n, sizeof(int));
    // Check if memory allocation is successful
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit with an error code
    }
    // Display the initial array elements (initialized to zero)
    printf("Initial array elements: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // Input array elements from the user
    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // Display the updated array elements
    printf("Updated array elements: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // Free the dynamically allocated memory
    free(arr);

    return 0;
}
