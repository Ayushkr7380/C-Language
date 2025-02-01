#include<stdio.h>
int main(){
    int n;
    printf("Enter array size : ");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter array elements - \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }

for(int i=0;i<n;i++){
    printf("%d \t",arr1[i]);
}

//Reverse the array..
for(int i=0;i<n/2;i++){
    int temp = arr1[i];
    arr1[i] = arr1[n - 1 - i];
    arr1[n - 1 - i] = temp;
}
printf("\n"); 

for(int i=0;i<n;i++){
    printf("%d \t",arr1[i]);
}
return 0;
}