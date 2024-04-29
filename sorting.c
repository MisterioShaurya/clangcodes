#include<stdio.h>
#include<conio.h>

void main(){
    int b,temp,a,n;
    printf("Enter the number of values that you're going to enter:");
    scanf("%d",&n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the %d value here:", i+1);
        scanf("%d",&arr[i]);
    }
    
    printf("You entered:\n");
    for (int j = 0; j < n; j++) {
        printf("%d \n",arr[j]);
    }
    int swapped=0;
    for (int pass = 1; pass < n; pass++) {
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                // Swap arr[i] and arr[i + 1]
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    
    printf("Sorted:\n");
    for (int l = 0; l < n; l++) {
        printf("%d \n",arr[l]);
    }
    
    getch();
}
