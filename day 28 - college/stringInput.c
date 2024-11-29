#include<stdio.h>
int main(){
    // char name[15];
    // printf("Enter your name : ");
    // scanf("%s",name);
    // printf("\nYour name is %s",name);

    // char name2[15];
    // printf("\nEnter second name : ");
    // scanf("%s[^\n]",name2);
    // printf("\nYour second name is %s",name2);

    //Instead of scanf use fgets

    char name3[15];
    printf("Enter name : ");
    fgets(name3,sizeof(name3),stdin);

    printf("Your name is %s",name3);
    return 0;
}