#include<stdio.h>
int main(){
    int arr[13] = {1,2,3,4,65,43,23,12,43,56,4,76,7};
    // int len = sizeof(arr)/sizeof(arr[0]);

    int middleElement = 13/2;

    printf("Middle Element = %d \n",arr[middleElement]);

    printf("Reverse Before middle element.\n");
    for(int i=middleElement-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}