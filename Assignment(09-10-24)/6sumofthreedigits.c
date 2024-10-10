//6. WACP to calculate the sum of the digits of a 3-digit number.

#include<stdio.h>
int main(){
    int num; //Declare variable num to store three digit number.
    int rem; //Declare varaible rem to store the reminder.
    int quot; //Declare variable quot to store quotient.
    int sum; //Declare varaible sum of store sum of digit of three digit number.

    printf("Enter any 3 digit numeber : "); //Prompt the user to enter any 3 digit number.
    scanf("%d",&num); //read and store the user's input value in num.

    //Logic to sum digits of a three digits number
    quot = num / 10;
    rem = num % 10;
    sum = rem + ( quot % 10 );
    sum = sum + (quot / 10);

    //Print the sum of digits of three digit number in terminal.
    printf("Sum of digits of %d is %d",num,sum);

    return 0; //return 0 to tell the successfull execution of the program
}