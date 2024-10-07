//2.Create a c program using switch to perform basic calculator operations on two user inputs numbers with operation (+ , - , * , / ) depending upon user choice.

#include<stdio.h>
int main(){
    int n1,n2,choice;

    printf("Enter 1st number : ");
    scanf("%d",&n1);
    printf("Enter 2nd number : ");
    scanf("%d",&n2);

    //Press key between 0 to 4 according to your desired operation.
    printf("Press 1 for Addition.\n");
    printf("Press 2 for Subtraction.\n");
    printf("Press 3 for Multiplication.\n");
    printf("Press 4 for Division.\n");
    printf("Press 0 to exit.\n");
    scanf("%d",&choice);

    switch (choice)
    {
        case 1:printf("Addtion of %d and %d is %d",n1,n2,(n1+n2));
            break;
        case 2:printf("Subtraction of %d and %d is %d",n1,n2,(n1-n2));
            break;
        case 3:printf("Multiplication of %d and %d is %d",n1,n2,(n1*n2));
            break;
        case 4:printf("Division of %d and %d is %d",n1,n2,(n1/n2));
            break;
        case 0 : break;
    
        default:printf("Enter your desired number between 0 to 4 only.");
            break;
    }
}