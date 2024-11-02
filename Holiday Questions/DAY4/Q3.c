//Write a program to calculate the sum of factorials of all odd numbers up to n.
#include<stdio.h>
void findFactorial(int count , int num);
int main(){
    int count ,num = 1;
    printf("Enter upto which you want to calculate factorail number : ");
    scanf("%d",&count);

    findFactorial(count,num);
    return 0;
}
void findFactorial(int count , int num){
    int fact;
    int sum = 0;
    for(int i = 0 ; i < count ; i++){
        if( num % 2 != 0){
            fact = 1;
            for( int j = 1 ; j <= num ; j++){
                fact = fact * j;
            }
            printf("Factorail of %d is %d.\n",num,fact);
            sum+=fact;
        }
        num++;
    }
    printf("Sum of all odd Factorial number is : %d",sum);
}