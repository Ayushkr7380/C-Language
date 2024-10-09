#include<stdio.h>
int main(){
    int num; //declare variable num to store user's input number.

    printf("Enter any number : "); //prompt the user to enter any number.
    scanf("%d",&num); //read and store user's input value in num.

    //Check if the user's input number is divisible by 15 , 25, and 30.
    if( num % 15 == 0 && num % 25 == 0 &&  num % 30 == 0){
        printf("JACKPOT");
    }
    else{
        printf("%d is not divisible by 15 and 25 and 30.",num);
    }
    return 0; //return 0 tells the successfull execution of the program.
}