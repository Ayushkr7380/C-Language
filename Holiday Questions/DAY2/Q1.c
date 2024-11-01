//Create a program to find the sum of digits of an integer, but stop the summation if any digit in the number is 5.
#include<stdio.h>
int sumOfDigits(int num);
int reverseNumber(int num);
int main(){
    int num , sum;
    printf("Enter any number : ");
    scanf("%d",&num);

    sum = sumOfDigits(num);
    printf("Sum is %d",sum);
    return 0;
}
int sumOfDigits(int num){
    int reverseNum = reverseNumber(num);
    int digit , sum = 0;
    while(reverseNum != 0){
        digit = reverseNum % 10;
        if(digit == 5){
            break;
        }
        else{
            sum += digit;
            reverseNum /=10;
        }
    }

    return sum;
}

int reverseNumber(int num){
    int rev = 0;
    while(num != 0){
        rev = ((rev * 10 ) + (num % 10));
        num /= 10;
    }
    return rev;
}