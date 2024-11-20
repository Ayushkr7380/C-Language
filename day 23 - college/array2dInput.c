#include<stdio.h>
int main(){
    int numarr[3][3];
    printf("Enter values of Array : ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&numarr[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d \t",numarr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Left diagonal elements are : \n");
    for(int i=0;i<3;i++){
        
            printf("%d \t",numarr[i][i]);
        
    }

    printf("\n");

    printf("Right diagonal elements are : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i+j == 2){
                printf("%d \t",numarr[i][j]);
            }
        }
    }
    return 0;
}