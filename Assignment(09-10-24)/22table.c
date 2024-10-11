//22. WACP to print the multiplication table of a user-input number.
#include<stdio.h>
int main(){
    int num1; //declare varaible num1 to store user's input value.

    printf("Enter any number : "); //prompt user to enter any number.
    scanf("%d",&num1); //read and store user's input value in num1.

    //Create a for loop to print table of user's input number form 1 to 10.
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d\n",num1,i,(num1*i));
    }
    return 0; //return 0 tells the successfull execution of the program.
}