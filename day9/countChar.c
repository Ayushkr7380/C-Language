#include<stdio.h>
int main(){
    char name[] = "Ayush123";
    int length = 0;
    for(int i=0; name[i] != '\0';i++){
        length+=1;
    }
    printf("The length of the string is: %d\n", length);
    return 0;
}