#include<stdio.h>
int main(){
    int num,i=2,flag=0;

    printf("Enter any anumber : ");
    scanf("%d",&num);

    while(i<num){
        if(num % i == 0){
            flag = 1;
            break;
        }

        i++;
    }
    if(flag == 0){
        printf("%d is prime number.",num);
    }
    else{
        printf("%d is not prime number.",num);
    }
    return 0;
}