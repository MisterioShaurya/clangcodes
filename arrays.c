#include<stdio.h>

int main(){
     /*
     Arrays is a collection of similar elements
     On varable---->capable of storing multiple values
     syntax:-
     data_type name_of_array[size];
     Note:- It is very impotant to note that the array index starts with 0.
          7|8|5|6
          ^ ^ ^ ^
    index 0|1|2|3 
     */
    int marks[] = {22,45,65,87,56,72};
     printf("mark1=%d \n",marks[0]);
     printf("mark2=%d \n",marks[1]);
     printf("mark3=%d \n",marks[2]);
     printf("mark4=%d \n",marks[3]);
     printf("mark5=%d \n",marks[4]);
     printf("mark6=%d \n",marks[5]);    
     return 0;
}