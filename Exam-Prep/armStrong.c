#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Enter any number : ");
    scanf("%d",&num);

    int lengthOFNum = 0;
    int temp = num;
    while(temp > 0 ){
        temp = temp/10;
        lengthOFNum++;
    }

    temp = num;
    while(temp !=0){
        int rem = temp % 10;
        int power = 1;
        for (int i = 0; i < lengthOFNum; i++) {
            power *= rem;
        }
        sum+=power;
        temp /= 10;

    }
    
    printf("Sum is %d\n",sum);

    if(num == sum){
        printf("%d is a armstrong number.",num);
    }
    else{
        printf("%d is not a armstrong number.",num);
    }
    return 0;
}