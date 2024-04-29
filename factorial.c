#include <stdio.h>

int main() {
    int num, factorial = 1;

    // User input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is non-negative
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial without using a function
        for (int i = 1; i <= num; i++) {
            factorial *= i;//factorial=factorial*i;
        }

        // Print the factorial
        printf("Factorial of %d is: %d\n", num, factorial);
    }

    return 0;
}
