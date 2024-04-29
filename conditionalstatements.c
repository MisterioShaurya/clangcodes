#include<stdio.h>

int main(){
    int age;
     printf("Enter your age here:");
     scanf("%d",&age);
     if (age<18)
     {
        printf("You can't drive.");
     }
     else
     {
        printf("You can drive.");
     }
     
     return 0;
}