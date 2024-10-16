//WACP to calculate the sum of first n natural number using while loop.
#include<stdio.h>
void sumofnatural();
int main(){
    sumofnatural();
    return 0;
}
void sumofnatural(){
    int num,sum=0,i=1;
    printf("Enter nth natural number : ");
    scanf("%d",&num);

    while(i<=num){
        sum = sum + i;

        i++;
    }
    printf("sum of first %d natural number is %d.",num,sum);

}