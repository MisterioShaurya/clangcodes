#include<stdio.h>
//A pointer is a variable wich stores the address of another varable.
int main(){
    //* = 'value at address' operator
    //& = 'address of' operator
    //%u = format secifier for printing pointer address
     int a=6;//assigning variable 'a' a integer 6
     int *b;//declearing a variable b of type int-pointer
     b= &a;//storing the adderess of a in b
     //B points to A---->B stores the address of A
     printf("Adderess of a = %u \n", &a);
     printf("Adderess of a = %u \n", b);
     printf("Adderess of b = %u \n", &b);
     printf("Value of i = %d \n", a);
     printf("Value of i = %d \n",*(&a));
     printf("Value of i = %d \n", *b);
     return 0;
}