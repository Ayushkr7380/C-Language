#include<stdio.h>
int fact1(int n);
int main(){
    int n,res;
    printf("Enter any number : ");
    scanf("%d",&n);

    res = fact1(n);

    printf("factorial of %d is %d",n,res);
    return 0;
}
int fact1(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    else{
        return n * ( fact1( n - 1));
    }
}