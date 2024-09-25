//WACP to take two integer input from the keyboard and print their sum in another varaible..
#include<stdio.h>
int main(){
    int n1,n2,res;
    printf("Enter 1st number : ");
    scanf("%d",&n1);
    printf("Enter 2nd number : ");
    scanf("%d",&n2);
    res = n1 + n2;
    printf("Sum of %d and %d is %d \n",n1,n2,res);
    return 0;
}