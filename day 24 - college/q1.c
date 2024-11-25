#include<stdio.h>
#include<string.h>
int* targetElement(int arr[3][3],int foundtarget[2]);
int main(){
    int arr[3][3] = {{1,2,4},{4,6,8},{1,56,8}};
    int foundtarget[2];

    targetElement(arr,foundtarget);

    printf("%d %d",foundtarget[0],foundtarget[1]);
    // printf("%d",foundtarget[1]);
    return 0;
}

int* targetElement(int arr[3][3],int foundtarget[2]){
    int num,i,j;
    printf("Enter any number : \n");
    scanf("%d",&num);

    for (i = 0; i < 3; i++)
    {
        for(j=0;j<3;j++){
            
            if(num == arr[i][j]){
                foundtarget[0] = i;
                foundtarget[1] = j;
                // printf("Matched.\n");
                return foundtarget;
            }
        }
    }
    
}