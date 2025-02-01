#include<stdio.h>
int fact(int num);
int fact(int num){
    //Using recursion 
    if( num == 0 ){
        return 0;
    } 
    if( num == 1){
        return 1;
    }   
    return num * fact(num - 1);
}
int main(){
    int result,num;
    printf("Enter any number : ");
    scanf("%d",&num);
    result = fact(num);
    if(result < 0){
        printf("Factorial of %d is not possible.",num);
    }
    else{
        printf("Factorial of %d is %d.",num,result);
    }
    return 0;
}