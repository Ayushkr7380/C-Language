//4.WACP to take user input of two integers and print their sum using a third variable.
#include<stdio.h>
int main(){
    
    int num1,num2,sum; // declare three integer variables num1, num2, and sum

    //prompt the user to enter the first number
    printf("Enter 1st number : ");
    scanf("%d",&num1);//read and store the user's input in num1

    //prompt the user to enter the second number
    printf("Enter 2nd number : ");
    scanf("%d",&num2); //read and store the user's input in num2

    sum = num1 + num2; // Calculate the sum of num1 and num2

    // Print the result showing the two numbers and their sum in terminal
    printf("Sum of %d and %d is %d.",num1,num2,sum);
    return 0; // Return 0 to indicate successful execution of the program
}