#include<stdio.h>
#include<math.h>
int main(){
    int num = 101;
    int count = 0,sum = 0;
    int temp = num;
    while(temp!=0){
        count++;
        temp/=10;
    }
    temp=num;
    for(int i=0;i<count;i++){
        int rem = temp % 10;
        sum += rem * pow(2,i); 
        temp/=10;
    }

    printf("Decimal number is %d",sum);
    return 0;
}