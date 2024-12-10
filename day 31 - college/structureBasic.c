#include<stdio.h>
struct stu_details{
    int roll;
    char name[15];
    float marks;
}st1;
int main(){
    st1.roll = 1;
    st1.name[15] ="Ayush";
    st1.marks = 20.5;

    printf("Student Details..\n");
    printf("%d \t %s \t %f",st1.roll,st1.name,st1.marks);
    return 0;
}