#include<stdio.h>
int main(){
    int r,circumference;
    printf("Enter radius of circle : ");
    scanf("%d",&r);
    circumference = 3.14*r*r;
    printf("Circumference of circle is %d",circumference);
    return 0;
}