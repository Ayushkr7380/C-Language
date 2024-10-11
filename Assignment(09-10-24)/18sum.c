//18. WACP to take user input of two numbers and print their sum using a third variable.
#include<stdio.h>
int main(){
    int num1,num2; //declare varaible num1 and num2 to store user's input value.
    int sum; //declare varaible num to store the sum of num1 and num2.

    printf("Enter 1st number : "); //prompt user to enter 1st number.
    scanf("%d",&num1); //read and store user's input in num1.

    printf("Enter 2nd number : "); //prompt user to enter 2nd number.
    scanf("%d",&num2); //read and store user's input in num2.

    sum = num1 + num2; //store the sum of num1 and num2 in sum varaible.

    printf("sum of %d and %d is %d",num1,num2,sum); //print the sum of num1 and num2 in terminal. 
    return 0; //return 0 tells the successfull execution of the program.
}