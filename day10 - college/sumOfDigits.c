#include<stdio.h>
int main(){
    int n,quot,rem;
    //Take input from the user
    printf("Enter any 3 digits number : ");
    scanf("%d",&n);

    //Logic to add sum of 3 digits
    quot = n / 10;
    rem = n % 10;
    rem = rem + (quot % 10);
    quot = quot / 10;
    rem = rem + quot;
    printf("sum of %d is %d",n,rem);

    return 0;
}