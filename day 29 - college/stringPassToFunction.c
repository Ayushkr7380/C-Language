void display(char str[]);
#include<stdio.h>
int main(){
    char str[] = "Ayush";
    display(str);
    return 0;
}
void display(char str[]){
    printf("%s",str);
}