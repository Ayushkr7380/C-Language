//1. Write the program to find the length of the string without using inbuilt function.
//2. Write a program to concatinate two strings without using inbuilt function.
//3. Write a program to reverse a string entered by the user.
//4. Write a program to compare two strings entered by the user using built in string function.

#include<stdio.h>
int main(){
    char name[] = {'A','Y','U','S','H','\0'};
    int count = 0;
    int i=0;
    printf("My name is %s.\n",name);
    while(name[i] != '\0'){
        count++;
        i++;
    }
    printf("Length is %d\n",count);
    return 0;
}