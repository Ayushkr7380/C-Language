#include<stdio.h>
#include<stdlib.h>
int main(){
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);

    //Dynamically alot the size of array.
    int *arr = (int *)malloc(size * sizeof(int));

    //Store value in the array using for loop
    printf("Enter %d values for array \n",size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    //Display the values of array.
    for(int i=0;i<size;i++){
        printf("%d \t",arr[i]);
    }

    free(arr);
    return 0;
}