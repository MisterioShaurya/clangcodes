#include <stdio.h>

int main() {
    int num, sum = 0;

    // User input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is positive
    if (num <= 0) {
        printf("Please enter a positive number.\n");
    } else {
        // Calculate the sum of natural numbers
        for (int i = 1; i <= num; i++) {
            sum += i;//sum=sum+i;
        }

        // Print the sum
        printf("Sum of first %d natural numbers is: %d\n", num, sum);
    }

    return 0;
}
