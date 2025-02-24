#include<stdio.h>
void reverseNumber(int num);
int main(){
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);

    reverseNumber(num);
}
void reverseNumber(int num){
    int rev=0,rem;
    int temp = num;
    while(temp!=0){
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp/=10;
    }
    printf("Reverse  : %d",rev);
}