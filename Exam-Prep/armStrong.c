#include<stdio.h>
int main(){
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);

    int lengthOFNum = 0;
    int temp = num;
    while(temp > 0 ){
        temp = temp/10;
        lengthOFNum++;
    }

    printf("Length of number is %d.",lengthOFNum);
    return 0;
}