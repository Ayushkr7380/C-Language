#include<stdio.h>
int isPrime(int num);
int isPrime(int num){
    for(int i=2;i<num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int result,num;
    printf("Enter any number : ");
    scanf("%d",&num);
    result = isPrime(num);
    if(result){
        printf("%d is a prime number.",num);
    }
    else{
        printf("%d is not a prime number.",num);
    }
    return 0;
}