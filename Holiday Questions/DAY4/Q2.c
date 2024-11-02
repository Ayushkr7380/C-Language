//Display a multiplication table for any given number, but only display even numbers in the result using continue inside a loop.
#include<stdio.h>
void table1(int num);
int main(){
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);

    table1(num);
    return 0;
}
void table1(int num){
    for(int i = 1 ; i <= 10 ; i++){
        if(i % 2 == 0){
            printf("%d\n",i*num);
        }
        else{
            continue;
        }
    }
}