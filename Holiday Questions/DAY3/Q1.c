//Print the first n numbers of the Fibonacci sequence using a while loop. (Use recursion in one variation).
#include<stdio.h>
int fibonacciNum(int num);
int main(){
    int n ,i;
    printf("Enter upto which you want fibonacci series : ");
    scanf("%d",&n);

    for(i = 0 ; i < n ; i++){
        printf("%d \t",fibonacciNum(i));
    }
    return 0;
}
int fibonacciNum(int num){
    if( num == 0) return 0;
    if( num == 1) return 1;
    return fibonacciNum(num - 1) + fibonacciNum(num - 2);
}
