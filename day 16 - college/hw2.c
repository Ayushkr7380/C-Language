#include<stdio.h>
int main(){
    int a = 1 , b = 12 , sum  , i = 0;
    sum = a;
    while (i<b)
    {
        sum++;
        i++;
    }
    printf("sum of %d and %d is %d",a,b,sum);
    
    return 0;
}