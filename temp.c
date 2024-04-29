#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "World";

    // strlen() example
    printf("Length of \"%s\" is %d.\n", str1, strlen(str1));

    // strcpy() example
    char copy[20];
    strcpy(copy, str1);
    printf("Copied string: %s\n", copy);

    // strcat() example
    strcat(str1, " ");
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // strcmp() example
    if (strcmp(str1, str2) == 0)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");

    // strchr() example
    char *ptr = strchr(str1, 'o');
    if (ptr != NULL)
        printf("Found 'o' at position: %ld\n", ptr - str1 + 1);
    else
        printf("Character 'o' not found.\n");

    return 0;
}

