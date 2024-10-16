//Calculate the factotail of a number using for loop.
#include<stdio.h>
void factorial1();
int main(){
    factorial1();
    return 0;
}

void factorial1(){
    int fact = 1 , i,num;
    printf("Enter any number : ");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        fact = fact * i;
    }

    printf("Factorial of %d is %d.",num,fact);
}