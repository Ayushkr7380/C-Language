//23. WACP to assign grades based on the following ranges:
//0-40%: D
//41-60%: C
//61-80%: B
//81-100%: A
//Above 100%: Wrong input
#include<stdio.h>
int main(){
    int percentage;//declare varaible percentage to store the user's input percentage value.

    printf("Enter percentage to find the grade of student : "); //prompt user to enter percentage.
    scanf("%d",&percentage); //read and store user's input in percentage varaible.

    //if else statement is used to check the user's input value in percentage varaible and display the correct choice according to that.
    if(percentage >= 0 && percentage <=40){
        printf("Grade D."); //Print Grade D in terminal when percentage is in between 0% to 40%.
    }
    else if(percentage >=41 && percentage <=60){
        printf("Grade C."); //Print Grade C in terminal when percentage is in between 41% to 60%.
    }
    else if(percentage >=61 && percentage <=80){
        printf("Grade B."); //Print Grade B in terminal when percentage is in between 61% to 80%.
    }
    else if(percentage >=81 && percentage <=100){
        printf("Grade A."); //Print Grade A in terminal when percentage is in between 81% to 100%.
    }
    else{
        printf("Wrong Input."); //Print Wrong input when the percentage is not lies between 0% to 100%
    }
    return 0; //return 0 tells the successfull execeution of the program.
}