#include <stdio.h>

int main() {
    int numbers[] = {5, 10, 15, 20, 25};
    int target = 15;

    // Using a for loop with a break statement to find the target number
    int i;

    for (i = 0; i < 5; ++i) {
        if (numbers[i] == target) {
            printf("Target number %d found at index %d.\n", target, i);
            break;  // Exit the loop when the target is found
        }
    }

    // If the loop completes without finding the target
    if (i == 5) {
        printf("Target number %d not found in the array.\n", target);
    }

    return 0;
}
