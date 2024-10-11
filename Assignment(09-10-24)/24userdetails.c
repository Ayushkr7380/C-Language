//24. WACP to take the user input of name, age, and marks of three subjects, printing the student details and overall percentage.
#include<stdio.h>
int main(){
    char name[30]; //Declare a string varaible to store the name.
    int age; //declare a integer varaible to store the age.
    float marks1,marks2,marks3; //declares float varibles to store the marks.
    float percentage; //Declare float varaible to store the calculated percentage.

    printf("Enter Name : "); //prompt user to enter name.
    scanf("%s",&name); //read and store user's input in name varaible.

    printf("Enter age : "); //prompt user to enter age.
    scanf("%d",&age); //read and store user's input in age varaible.

    printf("Enter 1st marks :"); //prompt user to enter 1st marks.
    scanf("%f",&marks1); //read and store user's input in marks1.

    printf("Enter 2nd marks :"); //prompt user to enter 2nd marks.
    scanf("%f",&marks2); //read and store user's input in marks2.

    printf("Enter 3rd marks :"); //prompt user to enter 3rd marks.
    scanf("%f",&marks3); //read and store user's input in marks3.

    //calculate the percentage.
    percentage = (marks1 + marks2 + marks3) / 3;

    //display studuent details in terminal.
    printf("---STUDENT DETAILS---\n");
    printf("NAME -> %s\n",name);
    printf("AGE -> %d\n",age);
    printf("MARKS 1 -> %f\n",marks1);
    printf("MARKS 2 -> %f\n",marks2);
    printf("MARKS 3 -> %f\n",marks3);
    printf("PERCENTAGE -> %f\n",percentage);

    return 0; //return 0 tells the successfull execution of the program.
}