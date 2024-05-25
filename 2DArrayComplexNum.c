#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];

    // Prompt the user to enter the first string
    printf("Enter the first string: ");
    scanf("%s", str1);

    // Prompt the user to enter the second string
    printf("Enter the second string: ");
    scanf("%c", str2);

    // Compare the strings
    if (strcmp(str1, str2) == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}
