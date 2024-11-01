//Write a program that generates the first n prime numbers using nested loops, but stop if a generated prime has a digit sum that equals a perfect square.
#include<stdio.h>
#include<math.h>
int isSumOfDigitsPerfectSquare(int num);
int main(){
    int n , num =2 , flag , i = 0;
    printf("Enter nth number upto which you want Prime number : ");
    scanf("%d",&n);

    while( i < n)
    {
        flag = 0;
        for(int j = 2 ; j*j <= num ; j++){
            if( num % j == 0){
                flag = 1;
            }
        }
        if(flag == 0){
            printf("%d is prime number.\n",num);
            if (isSumOfDigitsPerfectSquare(num)) {
                printf("The digit sum of %d is a perfect square.\n", num);
                break;
            }
            i++;
        }
        num++;
    }
    return 0;
}
int isSumOfDigitsPerfectSquare(int num){
    int sum = 0 , sqrtValue;
    while(num !=0){
        sum+= (num % 10);
        num /=10;
    }

    sqrtValue = (int)sqrt(sum);
    if (sqrtValue * sqrtValue == sum) {
        return 1; 
        
    }

    return 0;
}