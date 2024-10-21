#include<stdio.h>
int fibonacci1(int n);
int main(){
    int n , i;
    printf("Enter any number : ");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        printf("%d \t",fibonacci1(i));
    }
    

    return 0;
}

int fibonacci1(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fibonacci1( n - 1) + fibonacci1( n - 2 );
}