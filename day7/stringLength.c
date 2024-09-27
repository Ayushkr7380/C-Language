#include<stdio.h>
#include<string.h>
int main(){
    char name[30] = "Ayush";
    int length = 0;
    length = strlen(name);

    printf("Length of Name - %s is %d",name,length);
    return 0;
}