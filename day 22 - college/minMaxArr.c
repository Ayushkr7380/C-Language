#include<stdio.h>
int main(){
    int arr[5] = {12,45,2,56,1},i,max,min;
    max = min = arr[0];
    for(i=0;i<5;i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("MAX = %d\n",max);
    printf("MIN = %d\n",min);
    return 0;
}