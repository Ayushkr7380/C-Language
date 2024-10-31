//Write a C program to determine if a number is “Harshad” or “Niven” (i.e., divisible by the sum of its digits) without using modulus (%) to check divisibility.

#include<stdio.h>
int harshadCheck(int sum);
int main(){
    int num , sum;
    printf("Enter any number : ");
    scanf("%d",&num);

    sum = harshadCheck(num);
    if(( num - ( ( num / sum ) * sum)) == 0){
        printf("%d is Harshad Number.",num);
    }
    else{
        printf("%d is Not Harshad Number.",num);
    }

    return 0;
}

int harshadCheck(int num){
    int sum = 0;
    while( num != 0 ){
        sum = sum + (num - ( num / 10 ) * 10);
        num = num / 10; 
    }

    return sum;
}