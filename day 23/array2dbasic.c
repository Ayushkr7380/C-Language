#include<stdio.h>
int main(){
    int rows,cols;
    int arr[rows][cols];

    printf("Enter number of rows : ");
    scanf("%d",&rows);
    printf("Enter number of columns : ");
    scanf("%d",&cols);

    printf("Enter Matrix values : \n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d \t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}