#include<stdio.h>
int main(){
    int n,i;
    int fact=1;
    printf("Enter any number  : ");
    scanf("%d",&n);
    for ( i = n; i >= 1; i--)
    {
        fact = fact * i;
    }   
    printf("Factorial of %d is %d ",n,fact);
    return 0;
}