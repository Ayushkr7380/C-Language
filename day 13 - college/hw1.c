//1.Write a c program to find the greatest number among the three user input numbers.
#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter 1st number : ");
    scanf("%d",&n1);
    printf("Enter 2nd number : ");
    scanf("%d",&n2);
    printf("Enter 3rd number : ");
    scanf("%d",&n3);

    if(n1 >= n2 && n1 >= n3 ){
        printf("%d is greatest number.",n1);
    }
    else if(n2 >= n1 && n2 >= n3){
        printf("%d is greatest number.",n2);
    }
    else{
        printf("%d is greatest number.",n3);
    }
    return 0;
}