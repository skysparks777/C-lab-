#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // Input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Calculate and display the length of the string
    int length = strlen(str);
    printf("Length of the string: %d\n", length);

    return 0;
}
