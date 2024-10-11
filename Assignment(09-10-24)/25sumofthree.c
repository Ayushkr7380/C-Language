#include<stdio.h>
int main(){
    int a = 25 , b = 25 , c = 35; //declare integer varaibles and initialized values in them.
    int sum; //declare integer varibale sum and store the calculated sum in it.

    //calculate the sum of three numbers.
    sum = a + b + c;
    
    printf("Sum of %d , %d and %d is %d.",a,b,c,sum); //display the sum of three numbers in the terminal.

    return 0; //return 0 tells the successfull executionm of the program.
}