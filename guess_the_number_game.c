#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
     int number,guess,nguesses=1;
     srand(time(0));
     number = rand()%100 + 1;
     //printf("the number is: %d \n", number);
     do
     {
        printf("Guess the number btween 1 to 100:");
        scanf("%d",&guess);
        if (guess>number)
        {
            printf("Lower number please! \n");
        }else if (guess<number)
        {
            printf("Higher number please! \n");
        }
        else
        {
            printf("YAY!!!You guessed it in %d guesses! \n",nguesses);
        }
        
        nguesses++;
        
     } while (guess!=number);
     
     return 0;
}