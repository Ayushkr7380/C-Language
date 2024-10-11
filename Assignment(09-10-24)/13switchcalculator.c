//13.WACP using switch-case to perform basic calculator operations (addition, subtraction, multiplication, division) based on user input.
#include<stdio.h>
int main(){
    int num1 , num2; //declare varaible num1 and num2 to store user's input value.
    int choice; //declare variable choice to take input from the user that tells what action should be performed (+ , - , * , /).

    printf("Enter 1st number : "); //prompt user to enter 1st number.
    scanf("%d",&num1); //read and store user's input value to num1.

    printf("Enter 2nd number : "); //prompt user to enter 2nd number.
    scanf("%d",&num2); //read and store user's input value to num2.

    // Display operation options for the user.
    printf("Press 1 for Addition.\n");// Option for addition. 
    printf("Press 2 for Subtraction.\n");// Option for subtraction.
    printf("Press 3 for Multiplication.\n");// Option for multiplication.
    printf("Press 4 for Division.\n");// Option for division.
    printf("Press 0 for Exit.\n");// Option to exit the program.

    scanf("%d",&choice); //read and store user's input to choice varaible.

    // Use a switch statement to perform the appropriate action based on the user's choice.
    switch(choice){
        // If the user chooses 1, perform addition.
        case 1 : printf("Sum of %d and %d is %d",num1,num2,(num1+num2));
            break;
        // If the user chooses 2, perform subtraction.
        case 2 : printf("Subtraction of %d and %d is %d",num1,num2,(num1-num2));
            break;
        // If the user chooses 3, perform multiplication.
        case 3 : printf("Multiplication of %d and %d is %d",num1,num2,(num1*num2));
            break;
        // If the user chooses 4, perform division.
        case 4 : printf("Division of %d and %d is %d",num1,num2,(num1/num2));
            break;
        case 0 : 
            break;
        default:printf("Please enter valid number between 0 to 4 only."); // If the user enters an invalid option, display an error message.
    }

    return 0; // it tells the successfull execution of the program.
}