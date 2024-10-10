//7.WACP to declare three integer variables and perform sum, product, difference, and quotient operations on two of them, storing the results in the third variable.

#include<stdio.h>
int main(){
    int num1 = 10 , num2 = 2; //Declare and Initialize value in num1 and num2 varaible.
    int result; //Decalre varaible result to store the sum / difference / multiplication / quotient operation of num1 and num2.

    result = num1 + num2; //Sum of two num1 and num2
    printf("sum of %d and %d is %d\n",num1,num2,result); //Print the sum result.

    result = num1 - num2; //Subtration of two num1 and num2
    printf("Subtration of %d and %d is %d\n",num1,num2,result); //Print the Subtration result.

    result = num1 * num2; //Multiplication of two num1 and num2
    printf("Multiplication of %d and %d is %d\n",num1,num2,result); //Print the Multiplication result.

    result = num1 / num2; //Quotient of two num1 and num2
    printf("Quotient of %d and %d is %d\n",num1,num2,result); //Print the Quotient result.

    return 0; //return 0 tells the successfully execution of program.
}