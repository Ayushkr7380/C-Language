#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter 1st number : ");
    scanf("%d",&n1);
    printf("Enter 2nd number : ");
    scanf("%d",&n2);

    printf("Before Swapping..\n");
    printf("n1 = %d and n2 = %d\n",n1,n2);

    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;

    printf("After Swapping..\n");
    printf("n1 = %d and n2 = %d\n",n1,n2);
    return 0;
}