//Write a function call swap accepting two pointer variables  and swapping their values.
#include<stdio.h>
void swapUsingPointer(int *num1,int *num2);
int main(){
    int num1,num2;
    printf("Enter 1st number : ");
    scanf("%d",&num1);
    printf("Enter 2nd number : ");
    scanf("%d",&num2);

    swapUsingPointer(&num1,&num2);
    return 0;
}

void swapUsingPointer(int *num1,int *num2){
    int temp;
    printf("Before swapping --> %d %d\n",*num1,*num2);
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;

    printf("After swapping --> %d %d\n",*num1,*num2);

}