//WACP to explain the step by step process of computer execution for user-defined function while having a function for adding two user input number.
#include<stdio.h>
void sum();
int main(){
    printf("Learn to code functions..\n\n");
    printf("This is main function.\n\n");
    sum();
    printf("End of main function.\n");
    return 0;
}

void sum(){
    int num1,num2;
    printf("This is sum function.\n\n");
    printf("Enter 1st number : ");
    scanf("%d",&num1);
    printf("Enter 2nd number : ");
    scanf("%d",&num2);

    printf("Sum of %d and %d is %d\n\n",num1,num2,(num1+num2));

    printf("End of sum function.\n\n");
}