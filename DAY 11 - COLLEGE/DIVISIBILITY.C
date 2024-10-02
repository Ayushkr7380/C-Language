#include<stdio.h>
int main(){
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);

    if(n % 2 == 0){
        if( n % 5== 0 && n % 10 == 0){
            printf("%d is divisible by 5 and 10.",n);
        }
        //we can further add else    
    }
    else{
        if( n % 3 == 0 && n % 7 == 0){
            printf("%d is divisible by 3 and 7.",n);
        }
        //add else
    }
    return 0;
}