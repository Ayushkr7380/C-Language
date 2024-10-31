//Write a C program to check if a given number is a leap year or not without using the modulus operator(%)

#include<stdio.h>
int leapCheck(int num);
int main(){
    int n , result = 0; //Declare varaible n and result to store year and show result 
    printf("Enter any year : ");
    scanf("%d",&n);

    result = leapCheck(n);
    if(result == 1){
        printf("%d is leap year.",n);
    }
    else{
        printf("%d is not a leap year.",n);
    }
    return 0;
}

int leapCheck(int num){
    if((num - (( num / 400 ) * 400) == 0)){
        return 1;
    }
    else if((num - (( num / 100) * 100) == 0)){
        return 0;
    }
    else if((num - ((num / 4)* 4) == 0)){
        return 1;
    }
    else{
        return 0;
    }
}