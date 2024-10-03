#include<stdio.h>
int main(){
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);

    if(n%15 == 0 && n%25==0 && n%30 ==0 ){
        printf("Jackpot");
    }
    else{ 
        if(n%15==0){
            printf("Divisible by 15");
        }
        else if(n%25==0){
            printf("Divisible by 25");
        }
        else if(n%30==0){
            printf("Divisible by 30");
        }
        else{
            printf("Not divisible by given numbers");
        }
    }
    return 0;
}