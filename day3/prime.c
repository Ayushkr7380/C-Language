#include<stdio.h>
int main(){
    int prime = 0,i,n;
    printf("Enter any number : ");
    scanf("%d",&n);
    for (i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            prime = 1;
        }
        
    }
    if (prime == 0)
    {
        printf("%d is a Prime number",n);
    }
    else
    {
        printf("%d is a not a Prime number",n);
    }   
    return 0;
}