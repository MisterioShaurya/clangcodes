#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);

    int length = strlen(inputString);
    int isPalindrome = 1;

    for (int i = 0; i < length / 2; i++) {
        if (inputString[i] != inputString[length - i - 1]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    if (isPalindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }

    return 0;
}
