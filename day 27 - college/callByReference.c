#include<stdio.h>
void add(int *num1,int *num2);
void sub(int *num1,int *num2);
void mul(int *num1,int *num2);
void div(int *num1,int *num2);
int main(){
    int num1,num2;
    printf("Enter 1st number : ");
    scanf("%d",&num1);
    printf("Enter 2nd number : ");
    scanf("%d",&num2);

    add(&num1,&num2);
    sub(&num1,&num2);
    mul(&num1,&num2);
    div(&num1,&num2);

    return 0;
}
void add(int *num1,int *num2){
    int n1 = *num1;
    int n2 = *num2;
    printf("\nAdd is %d",n1+n2);
}
void sub(int *num1,int *num2){
    int n1 = *num1;
    int n2 = *num2;
    printf("\nSubtract is %d",n1-n2);
}
void mul(int *num1,int *num2){
    int n1 = *num1;
    int n2 = *num2;
    printf("\nMultiple is %d",n1*n2);
}
void div(int *num1,int *num2){
    int n1 = *num1;
    int n2 = *num2;
    printf("\nDivide is %d",n1/n2);
}