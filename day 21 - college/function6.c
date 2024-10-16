//Write a function in C Programming to check whether the two user input number are palindrome or not.
#include<stdio.h>
void palindrome1();
int main(){
    palindrome1();
    return 0;
}
void palindrome1(){
    int num,rev = 0,rem,check;
    printf("Enter any number : ");
    scanf("%d",&num);

    check = num;

    while(num!=0){
        rem = num % 10;
        rev = (rev * 10 ) + rem;
        num = num / 10;
    }
    if(check == rev){
        printf("%d is palindrome number.",check);
    }
    else{
        printf("%d is not palindrome number.",check);
    }
}