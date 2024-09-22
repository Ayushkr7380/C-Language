#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter 1st number : ");
    scanf("%d",&n1);
    printf("Enter 2nd number : ");
    scanf("%d",&n2);
    
    printf("N1 = %d AND N2 = %d",n1,n2);
    
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;

    printf("\nN1 = %d AND N2 = %d",n1,n2);   
    return 0;
}