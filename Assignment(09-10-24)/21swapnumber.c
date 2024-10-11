//21. WACP to swap the values of two user-input variables.
#include<stdio.h>
int main(){
    int num1,num2; //Declare varaible num1 and num2 to store value.

    printf("Enter 1st number : "); //prompt user to enter 1st number.
    scanf("%d",&num1); //read and store user's input in num1 variable.

    printf("Enter 2nd number : "); //prompt user to enter 2nd number.
    scanf("%d",&num2); //read and store user's input in num2 variable.

    printf("Before Swapping --> num1 = %d & num2 = %d\n",num1,num2); //display the numbers before swapping.

    //Logic to swap numbers.
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After Swapping --> num1 = %d & num2 = %d\n",num1,num2); //Display the number after swapping.

    return 0; //return 0 tells the successfull execution of the program.
}