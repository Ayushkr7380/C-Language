//WACP to reverse the given integer number.
#include<stdio.h>
void reverse1();
int main(){
    reverse1();
    return 0;
}
void reverse1(){
    int rev=0,rem,num;
    printf("Enter any number : ");
    scanf("%d",&num);

    while(num!=0){
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    printf("Reverse is %d.",rev);
}