//17. WACP to declare an integer variable and print its value.
#include<stdio.h>
int main(){
    int num1; //declare varaible num1 to store user's input value.

    printf("Enter any number : "); //prompt user to enter any number.
    scanf("%d",&num1); //read and store user's input in num1.

    printf("%d",num1); //print the value of num1 in terminal.
    return 0;//return 0 tells the successfull execution of the program.
}