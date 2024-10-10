//5.WACP to take user input of two variables, swap them, and print before and after swapping.
#include<stdio.h>
int main(){
    int num1,num2; //declare two varaible num1 and num2.

    printf("Enter 1st number : "); //prompt the user to enter 1st number.
    scanf("%d",&num1); // Read and store the user's input in num1.

    printf("Enter 2nd number : "); //prompt the user to enter 2nd number.
    scanf("%d",&num2); // Read and store the user's input in num2.

    //Print the value of num1 and  num2 in terminal before swapping.
    printf("Before Swapping -> num1 = %d & num2 = %d\n",num1,num2);

    //logic to swap num1 into num2 and num2 into num1.
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    //Print the value of num1 and  num2 in terminal after swapping.
    printf("After Swapping -> num1 = %d & num2 = %d\n",num1,num2);

    return 0; //Return 0 to indicate the successfull execution of program.
}