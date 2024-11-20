#include<stdio.h>
int main(){
    int arr1[] = {12,4,5};
    int arr2[] = {45,2,6};
    int arr3[6] , i ,j ,k;
    for(i=0;i<3;i++){
        arr3[i] = arr1[i];
    }
    for(j=0;j<3;j++){
        k=j+3;
        arr3[k] = arr2[j];
    }
    
    for(k=0;k<6;k++){
        printf("%d ",arr3[k]);
    }   
}