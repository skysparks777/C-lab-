#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];

    // Input first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  // Remove the newline character if present

    // Input second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  // Remove the newline character if present

    // Concatenate strings
    strcat(str1, str2);

    // Display the concatenated string
    printf("Concatenated String: %s\n", str1);

    return 0;
}
