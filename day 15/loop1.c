//For loop..
#include<stdio.h>
int main(){
    char ch[12] = "Hello";
    for(int i=0;i<=4;i++){
        printf("%d. %s \n",(i+1),ch);
    }
    printf("End loop");
    return 0;
}