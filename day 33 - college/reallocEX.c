#include<stdio.h>
#include<stdlib.h>
int main(){
   
    int n,newn;
  
    //step 1- know the size of arr
    printf("Enter initial no. of elements in array: ");
    scanf("%d",&n);

    //step 2- give the size with declaration
    int* arr=(int *)malloc(n*sizeof(int));
    if(arr==NULL){
        printf("Memory allocation failed !!");
        return 1;
    }
    
    //step 3- insert element of array
    printf("Enter array elements-");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }

    //step- 4 resize the array
    printf("Enter total new size of array: ");
    scanf("%d",&newn);

    int *resizedarr=(int *)realloc(arr,newn*sizeof(int));
    if(resizedarr==NULL){
        printf("Memory allocation failed !!");
        free(arr);
        return 1;
    }

    if(newn>n){
        printf("\nEnter more integers-\n");
        for(int i=n;i<newn;i++){
            scanf("%d",&resizedarr[i]);
        }
    }
    printf("Array is:\n");
    //step 5- print full array
    for(int i=(newn-1);i>=0;i--){
            printf("%d ",resizedarr[i]);
        }


    //step 6- free the memory
    free(resizedarr);
   
    return 0;

}