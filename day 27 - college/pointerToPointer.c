#include<stdio.h>
int main(){
    int a = 10;

    int *ap = &a;

    printf("Address of a = %d",ap); //Referencing --> Taking out the address
    return 0;
}