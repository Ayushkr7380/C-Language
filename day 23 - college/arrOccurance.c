#include<stdio.h>
void countFrequency(int arr[],int len);
void countFrequency(int arr[],int len){
    int count = 0;
    int countedArr[len];
    for(int i=0;i<len;i++){
        countedArr[i] = 0;
    }
    for(int i=0;i<len;i++){
        count = 1;
        for(int j=i+1;j<len;j++){
            if(arr[i] == arr[j]){
                count++;
                countedArr[j] = 1;

            }
        }
        if(countedArr[i]==0){
            printf("%d=%d\n",arr[i],count);
        }
    }
}
int main(){
    int arr[] = { 11,12,12,2,2,4};
    int len = sizeof(arr)/sizeof(arr[0]); //Number of element present in array.

    printf("Array element and their frequency.\n");
    countFrequency(arr,len);
    return 0;
}