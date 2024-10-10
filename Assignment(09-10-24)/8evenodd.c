//8. WACP using 'if-else' to check if a user-input value is even or odd.
#include<stdio.h>
int main(){
    int num; //Declare varaible num to store value.

    printf("Enter any number : "); //prompt the user to enter any number.
    scanf("%d",&num); //read and store user's input in num.

    //Check if the number is divisible by 2 i.e.,Even Number
    if(num % 2 == 0){
        // If the condition is true, print that the number is even.
        printf("%d is even number.",num);
    }
    else{
        // If the condition is false , print that the number is odd.
        printf("%d is odd number.",num);
    }

    return 0; //return 0 tell the successful execution of the program.
}