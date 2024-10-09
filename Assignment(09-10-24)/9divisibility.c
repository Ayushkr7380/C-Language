#include<stdio.h>
int main(){
    int num; //declare variable num to store user's input number.

    printf("Enter any number : "); //prompt the user to enter any number.
    scanf("%d",&num); //read and store user's input value in num.

    //Check if the number is divisible by 2 i.e.,Even number
    if(num % 2 == 0){
        //Check if the number is divisible by 5 and 10.
        if( num % 5 == 0 && num % 10 == 0 ){
            printf("%d is divisible by 5 and 10.",num);
        }
        else{
            printf("%d is even but not divisible by 5 and 10.",num);
        }
    }
    else{
        //Check if the number is divisible by 3 and 7.
        if( num % 3 == 0 && num % 7 == 0){
            printf("%d is divisible by 3 and 7.",num);
        }
        else{
            printf("%d is odd but not divisible by 3 and 7.",num);
        }
    }
    return 0; //return 0 tells the successfull execution of program.
}