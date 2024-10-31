//Design a program that takes a three-digit number and checks if it is an armstrong number(e.g., 153 , where 1^3 + 5^3 + 3^3 = 153).
#include<stdio.h>

int armStrongCheck(int num);
int main(){
    int num , result; //Declare varaible num and result to store values.
    printf("Enter a number : ");
    scanf("%d",&num);

    result = armStrongCheck(num);
    if(result == 1){
        printf("%d is a armstrong number.",num);
    }
    else{
        printf("%d is not a armstrong number.",num);
    }
    return 0;
}
int armStrongCheck(int num){
    int tempNum ,digit, sum = 0;

    tempNum = num;
    while(tempNum != 0){
        digit = tempNum % 10;
        sum = sum + (digit * digit * digit);
        tempNum = tempNum / 10;
    }
    
    return ( num == sum ) ? 1 : 0;
}