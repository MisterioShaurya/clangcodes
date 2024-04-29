#include<stdio.h>
int sum(int x,int y);//function prototype
int main(){
    int a,b;
    printf("Enter the value of A here:");;
    scanf("%d",&a);//The data given by user is called arguments
    printf("Enter the value of B here:");;
    scanf("%d",&b);//The data given by user is called arguments
    printf("The sum of %d and %d is:%d",a,b,sum(a,b));//function call
     return 0;
}
int sum(int x,int y){ //fnction definition
int z=x+y;// x and y are parameters
return z;
}