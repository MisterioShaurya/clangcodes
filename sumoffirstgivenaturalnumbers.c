#include<stdio.h>

int main(){
    int sum=0,n,i;
     printf("Enter a number:");
     scanf("%d", &n);
     for (int i = 0; i <= n; i++)
     {
        sum+=i;
     }
     printf("The sum from 1 to %d is: %d",n,sum);
     return 0;
}