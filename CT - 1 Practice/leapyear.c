#include<stdio.h>
int leap1(int year);
int main(){
    int year,leap;
    printf("Enter any year : ");
    scanf("%d",&year);

    leap = leap1(year);
    if(leap){
        printf("%d is leap year.",year);
    }
    else{
        printf("%d is not leap year.",year);
    }

    return 0;
}

int leap1(int year){
    if(year % 400 == 0){
        return 1;
    }
    else if( year % 100 == 0){
        return 0;
    }
    else if( year % 4 == 0){
        return 1;
    }

    return 0;
}