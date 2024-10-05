// 3.Write a c program using switch to convert the grade (A,B,C,D,F) into it's respective discription.A for excellent, B for good, C for average , D for below average , F for fail

#include<stdio.h>
int main(){
    char grade;
    
    printf("Enter any grade between A, B, C, D, and F: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
    case 'a':
        printf("Excellent");
        break;
    case 'B':
    case 'b':
        printf("Good");
        break;
    case 'C':
    case 'c':
        printf("Average");
        break;
    case 'D':
    case 'd':
        printf("Below average");
        break;
    case 'F':
    case 'f':
        printf("Fail");
        break;
    default:
        printf("Invalid grade");
        break;
    }
    return 0;
}
