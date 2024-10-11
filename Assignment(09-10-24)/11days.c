//11. WACP to take a user-input integer between 1 to 7 and print the corresponding day of the week.
#include<stdio.h>
int main(){
    int num; //declare varaible num to store user's input value.

    printf("Enter any number between 1 to 7 : "); //prompt user to enter any number.
    scanf("%d",&num); //read and store user's input value.

    switch(num){
        case 1:printf("Sunday."); //print sunday in terminal when user input number is 1.
            break;
        case 2:printf("Monday."); //print monday in terminal when user input number is 2.
            break;
        case 3:printf("Tuesday."); //print tuesday in terminal when user input number is 3.
            break;
        case 4:printf("Wednesday."); //print wednesday in terminal when user input number is 4.
            break;
        case 5:printf("Thursday."); //print thursday in terminal when user input number is 5.
            break;
        case 6:printf("Friday."); //print friday in terminal when user input number is 6.
            break;
        case 7:printf("Saturday."); //print saturday in terminal when user input number is 7.
            break;
        default:printf("Enter Number between 1 to 7 only."); // default body will be executed when the user input number is not between 1 to 7.
    }
    return 0; //return 0 tells the successfull execution of the program.
}