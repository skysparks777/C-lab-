#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Input the initial size of the array from the user
    printf("Enter the initial size of the array: ");
    scanf("%d", &n);

    // Dynamically allocate memory for an array of integers using malloc
    int *arr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation is successful
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit with an error code
    }

    // Input array elements from the user
    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display the initial array elements
    printf("Initial array elements: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Input the new size of the array from the user
    int newSize;
    printf("Enter the new size of the array: ");
    scanf("%d", &newSize);

    // Resize the array using realloc
    arr = (int *)realloc(arr, newSize * sizeof(int));

    // Check if reallocation is successful
    if (arr == NULL) {
        printf("Memory reallocation failed.\n");
        return 1; // Exit with an error code
    }

    // Input additional elements for the resized array
    printf("Enter %d additional elements for the resized array:\n", newSize - n);
    for (int i = n; i < newSize; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display the updated array elements
    printf("Updated array elements: ");
    for (int i = 0; i < newSize; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}
