#include<stdio.h>
int main(){
    char grade; //declare varaible grade to store user's input value.

    printf("Enter grade (A , B, C, D, F) : "); //Prompt user to enter grade.
    scanf("%c",&grade); //read and store user's input varaible in grade.

    //use a switch statement to print particular line in terminal based on user's choice.
    switch (grade)
    {
        case 'A':
        case 'a':printf("Excellent.");
            break;
        case 'B':
        case 'b':printf("Very Good.");
            break;
        case 'C':
        case 'c':printf("Average.");
            break;
        case 'D':
        case 'd':printf("Below Average.");
            break;
        case 'F':
        case 'f':printf("Fail.");
            break;
    
        default:printf("Invalid Grade!!");
            break;
    }
    return 0; //return 0 tells the successfull execution of the program.
}