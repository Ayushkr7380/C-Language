//Write a program to determine if a given number is prime or not using a single if condition within a loop.
#include<stdio.h>
int isPrime(int num);
int main(){
    int num,result = 0;
    printf("Enter any number : ");
    scanf("%d",&num);

    result = isPrime(num);
    if(result == 1){
        printf("Prime.");
    }
    else{
        printf("Not Prime.");
    }
    return 0;
}

int isPrime(int num){
    if (num <= 1) {
        return 0;
    }
    for(int i = 2 ; i<num ; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}