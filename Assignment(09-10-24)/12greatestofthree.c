//12. WACP to find the greatest number among three user-input numbers.
#include<stdio.h>
int main(){
    int num1 , num2 , num3; //declare varaible num1 ,num2 and num3 to store user's input value.

    printf("Enter 1st number : "); //prompt user to enter 1st number.
    scanf("%d",&num1); //read and store user's input in num1.

    printf("Enter 2nd number : "); //prompt user to enter 2nd number.
    scanf("%d",&num2); //read and store user's input in num2.

    printf("Enter 3rd number : "); //prompt user to enter 3rd number.
    scanf("%d",&num3); //read and store user's input in num3.

    //Check num1 is greater than num2 and num3
    if( num1 >= num2 && num1 >= num3){
        printf("%d is the greatest number.",num1);
    }
    //check num2 is greater than num1 and num3
    else if( num2 >= num1 && num2 >= num3){
        printf("%d is the greatest number.",num2);
    }
    //When num1 or num2 is not greater then else will print num3 as greatest.
    else{
        printf("%d is the greatest number.",num3);
    }
    return 0; //return 0 tells the successfull execution of the program.
}