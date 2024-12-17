#include<stdio.h>
#include<stdlib.h>
int main(){

    int n;
    float avg,sum=0.0;
    //step 1- know the size of arr
    printf("Enter no. of elements in array: ");
    scanf("%d",&n);

    //step 2- give the size with declaration
    int* arr =(int *)malloc(n*sizeof(int));
    if(arr==NULL){
        printf("Memory Allocation Failed !!!");
        return 1;
    }
    
    //step 3- insert element of array
    printf("Enter array elements-");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }

    //step 4- Calculate average
    avg=sum/n;

    printf("Average of elements of array is: %.2f.",avg);


    //step 5- free the memory
    free(arr);
    return 0;
}