//WACP to swap the two numbers without using the third varaible.
#include<stdio.h>
int main(){
    int n1 = 10 , n2 = 222;

    //Before swapping
    printf("Before --> n1 = %d and n2 = %d\n",n1,n2);

    //Logic for swapping
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;

    //After swapping
    printf("After --> n1 = %d and n2 = %d",n1,n2);

    return 0;
}