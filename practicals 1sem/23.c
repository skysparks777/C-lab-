#include <stdio.h>

int main() {
    // Input the size of the array from the user
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare an array of the specified size
    int numbers[size];

    // Input array elements from the user
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Input the number to search from the user
    int target;
    printf("Enter a number to search in the array: ");
    scanf("%d", &target);

    // Searching for the entered number in the array
    int index = -1;  // Default value if the number is not found

    for (int i = 0; i < size; ++i) {
        if (numbers[i] == target) {
            index = i;
            break;  // Exit the loop when the number is found
        }
    }

    // Displaying the result
    if (index != -1) {
        printf("The number %d is found at index %d in the array.\n", target, index);
    } else {
        printf("The number %d is not found in the array.\n", target);
    }

    return 0;
}
