//Using only a single for loop, generate the Fibonacci series up to the nth term without using arrays or recursion.
#include<stdio.h>
void fibonacciSeries(int num);
int main(){
    int num;
    printf("Enter nth term for fibonacci series : ");
    scanf("%d",&num);

    fibonacciSeries(num);
    return 0;
}
void fibonacciSeries(int num){
    int term1 = 0,term2 = 1 , nextTerm;
    for(int i = 0 ;i <num ; i++){
        printf("%d \t",term1);
        
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;

    }
}