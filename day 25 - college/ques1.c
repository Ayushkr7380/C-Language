//Declare a pointer p storing the value of character variable gender = f .use the pointer varaible to print the value of the gender.

#include<stdio.h>
int main(){
    char gender = 'f';

    char *p = &gender;

    printf("Value of gender via pointer : %c",*p);
    return 0;
}