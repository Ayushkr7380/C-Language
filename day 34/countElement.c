#include<stdio.h>
int main(){
    int n,ele,count=0;
    printf("Enter the size of the array : ");
    scanf("%d",&n);

    int arr[n];

    printf("Input the values in the element of the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the element to search : ");
    scanf("%d",&ele);

    for(int i=0;i<n;i++){
        if(arr[i] == ele){
            count++;
        }
    }

    if(count>0){
        printf("Element %d is found %d times in the array.\n",ele,count);
    }
    else{
        printf("Element %d is not found in the array.\n",ele);
    }
    return 0;
}