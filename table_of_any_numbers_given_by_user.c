#include <stdio.h>

int main() {
    int x;
    printf("Enter how many tables you want to print: ");
    scanf("%d", &x);

    int b[x];
    for (int i = 0; i < x; i++) {
        printf("Enter the number of which you want to print the table: ");
        scanf("%d", &b[i]);
    }

    int rows = 10, cols = x;
    int matrix[rows][cols];

    // Fill the matrix with multiplication table values
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            matrix[i][j] = b[j] * (i + 1);
        }
    }

    // Print the matrix
    if (x==1)
    {
    printf("Your table:\n");
    }else
    {
    printf("Your tables:\n");
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}