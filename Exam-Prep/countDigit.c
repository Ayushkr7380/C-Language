#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter any number : ");
    scanf("%d",&n);

    int temp = n;
    while(temp !=0){
        count++;
        temp/=10;
    }
    if(count == 0){
        printf("count -- %d",count+1);
    }
    else{
        printf("count -- %d",count);
    }
    return 0;
}