#include<stdio.h>
int palindrome(int num);
int palindrome(int num){
    int rev=0,rem,temp;
    temp = num;
    while(temp !=0){
        rem = temp % 10;
        rev = (rev * 10 ) + rem;
        temp/=10;
    }
    return (rev==num);
}
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    if(palindrome(num) == 1){
        printf("%d is palindrome number.",num);
    }
    else{
        printf("%d is not palindrome number.",num);
    }
}