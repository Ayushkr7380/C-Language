//String functions : ---
//#include<string.h>
//1. strlen(s1); // sizeof(s1) // Difference between strlen , sizeof inthe case of string..
//The main difference is sizeof returns null to \0 where as strlen return without null '\0'..

//2.strcpy(s2,s1); //s2 will be blank string and s1 will be data string.

//3. strcat(s1,s2);

//4.strcmp(s1,s2); 


//#include<ctype.h>
//1.islower(c1);
//2.isupper(c1);
//3.tolower(c1);
//4.toupper(c1);
#include<string.h>
#include<stdio.h>
int main(){
    char s1[] = "Ayush";
    char s2[10];
    char last[] = "Kumar";
    char fullName[20];

    int length = strlen(s1);
    printf("Length of string s1 is %d\n",length);

    strcpy(s2,s1);
    printf("Name in s2 : %s\n",s2);

    strcpy(fullName,s1);

    strcat(fullName,last);
    printf("Full Name after concatenation : %s\n",fullName);
    return 0;
}