#include<stdio.h>
int main(){
    int x = 10, y = 5;
    printf("Bitwise XOR %d\n",x^y);
    printf("Bitwise OR %d\n",x|y);
    printf("Bitwise not 1s complement %d\n",~y);
    printf("Bitwise right shift %d\n",x>>y);
    printf("Bitwise left shift %d\n",x<<y);
    return 0;
}