//Write a user-defined function in c programming which calculates and print the fibonnaci series upto n number.

#include<stdio.h>
void fibonacci1(int n);
int main(){
    int n;
    printf("Enter any number upto which you want fibonacci series to print : ");
    scanf("%d",&n);
    fibonacci1(n);
    return 0;
}
void fibonacci1(int n){
    int t1=0 , t2=1 , nextTerm , i;
    for(i = 1 ; i <=n ; i++){
        printf("%d\t",t1);

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}