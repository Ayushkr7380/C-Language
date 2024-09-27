#include<stdio.h>
int main(){
    int n1=456,ques,rem;
    ques = n1 / 10;
    rem = n1 % 10;

    rem = rem + (ques % 10);

    ques = ques / 10;
    rem = rem + (ques % 10);
    printf("%d",rem);
    
    return 0;
}