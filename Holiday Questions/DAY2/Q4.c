//Write a program to check if a given integer can be represented as a sum of two prime numbers (Goldbach's conjecture).
#include<stdio.h>
void isGoldbach(int num);
int isPrime(int num);
int main(){
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);

    if(num<=2 || num % 2 != 0){
        printf("Please enter an even number greater than 2.\n");
    }
    else{
        isGoldbach(num);
    }
    return 0;
}
void isGoldbach(int num){ 
    int diff;
    for(int i = num - 1 ; i > 1 ; i--){
        if(isPrime(i)){
            diff = num - i;
            if(isPrime(diff)){
                printf("%d can be expressed as the sum of %d and %d.\n", num, i, diff);
                return;
            }
        }
    }
    printf("No prime pair found that sums to %d.\n", num);
}

int isPrime(int num){
    if(num <= 1) return 0;
    for(int i = 2 ; i * i <= num ; i++ ){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}