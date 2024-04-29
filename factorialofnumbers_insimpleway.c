#include<stdio.h>

int main(){
     int i=1,n,factorial=1;
     printf("Enter a number:");
     scanf("%d", &n);
     while (i<= n)
     {
        factorial*=i;//recursion----calling function itself in the program
        i++;
     }
     printf("Factorial of %d is: %d",n,factorial);
     return 0;
}