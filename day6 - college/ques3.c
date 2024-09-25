//Write a C program to declare three integer variables with the two different values stored in them and printing the third varaible with the sum , product , difference , and quotient of the two numbers.

#include<stdio.h>
int main(){
    int n1,n2,result;
    n1 = 10;
    n2 = 5;
    //Add
    result = n1 + n2;
    printf("\nSum is %d",result);
    //Product
    result = n1 * n2;
    printf("\nProduct is %d",result);
    //Difference
    result = n1 - n2;
    printf("\nDifference is %d",result);
    //Quotient
    result = n1 / n2;
    printf("\nQuotient is %d",result);
    return 0;
}