#include<stdio.h>
int main(){
    float a,*b;
    b = &a;

    printf("Before - %p\n",b);
    
    b = b+3;
    printf("After - %p\n",b);
    
    return 0;
}