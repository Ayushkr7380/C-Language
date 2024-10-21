#include<stdio.h>
void fibonacci1(int n);
int main(){
    int n;
    printf("Enter upto which you want fibonacci series : ");
    scanf("%d",&n);

    fibonacci1(n);
    return 0;
}

void fibonacci1(int n){
    int t1 = 0 , t2 = 1 , i , nextTerm;

    for(i = 1; i <=n; i++){
        printf("%d \t",t1);

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

}