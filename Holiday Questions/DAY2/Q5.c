//Create a program that accepts an integer and checks if reversing the digits forms a prime number.
#include<stdio.h>
void reverseNum(int num);
int isPrime(int num);
int main(){
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);

    reverseNum(num);

    return 0;
}
void reverseNum(int num){
    int rev = 0;
    while(num != 0){
        rev = ((rev * 10) + (num % 10));
        num/=10;
    }
    if(isPrime(rev)){
        printf("Reversed number %d is a Prime number.",rev);
    }
    else{
        printf("Reversed number %d is not a Prime number.",rev);
    }
}

int isPrime(int num){
    if(num <= 1) return 0;
    for(int i =2 ; i * i <= num ; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}