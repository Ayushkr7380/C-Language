#include<stdio.h>
int main(){
    int n;
    //Take input from user
    printf("Enter any number : ");
    scanf("%d",&n);

    //Logic to check number is even or odd
    if(n % 2 == 0)
        printf("%d is even number.\n",n);
        // printf("True Condition.\n");
    
    else
        printf("%d is odd number.\n",n);
        printf("False Condition.\n");
    
    return 0;
}