#include<stdio.h>
int main(){
    int x = 10;

    int *addOfx;

    addOfx = &x;

    printf("X = %d",x); //printing normal varaible.
    printf("\n Address of X = %p",addOfx); //printing addOfx.
    printf("\n Size of Pointer : %d",sizeof(addOfx)); //printing size of pointer.
    printf("\n Value of X via Pointer : %d",*addOfx); //printing value at addOfx using "*".

    return 0;
}