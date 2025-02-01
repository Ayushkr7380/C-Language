#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter 1st number : ");
    scanf("%d",&n1);
    printf("Enter 2nd number : ");
    scanf("%d",&n2);

    // printf("n1 -- %d || n2 -- %d\n",n1,n2);

    //Ensure n1 is greatest..
    if(n1 < n2){
        n1 = n1 + n2;
        n2 = n1 - n2;
        n1 = n1 - n2;
    }
    // printf("n1 -- %d || n2 -- %d\n",n1,n2);

    //Finding GCD
    while(n2 !=0){
        int rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }

    int gcd = n1;
    printf("gcd -- %d",gcd);
    return 0;
}