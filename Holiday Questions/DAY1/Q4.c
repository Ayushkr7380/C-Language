//Design a program to find the smallest three-digit Armstrong number greater than a given number, using only bitwise operators.
#include<stdio.h>
int isSmallestArmstrong(int num);
int isArmstrong(int newNum);
int main(){
    int num,result;
    printf("Enter any number : ");
    scanf("%d",&num);

    result = isSmallestArmstrong(num);
    printf("%d",result);
    return 0;
}

int isSmallestArmstrong(int num){
    int newNum = num + 1;
    while(1){
        if(newNum>=100 && newNum<=999 && isArmstrong(newNum)){
            return newNum;
        }
        newNum++;
    }
}

int isArmstrong(int newNum){
    int tempNum = newNum;
    int digit , sum = 0;
    while(tempNum != 0){
        digit = tempNum % 10;
        sum += (digit * digit * digit);
        tempNum/=10;
    }

    return (sum == newNum) ? 1 : 0;
}