#include<stdio.h>
#include<math.h>
int main(){
    int num , tempNum , digit = 0 , rem;
    double res = 0;

    printf("Enter any number : ");
    scanf("%d",&num);

    //Count the number of digits..
    tempNum = num;
    while(tempNum != 0){
        tempNum = tempNum / 10;
        digit = digit + 1;
    }

    //sum the number of digits with power to n number of digit..
    tempNum = num;
    while(tempNum != 0){
        rem = tempNum % 10;
        res = res + pow(rem , digit);
        tempNum = tempNum / 10;
    }

    //Check the input number and the result is same or not.
    if(num == (int)res){
        printf("%d is armstrong numnber.\n",num);
    }
    else{
        printf("%d is not armstrong number.\n",num);
    }

    return 0;
}