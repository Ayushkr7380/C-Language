//31.Print the following pattern.
#include<stdio.h>
int main(){
    //Pattern 1
    for(int i=0 ; i<=2 ; i++){
        for(int j=0;j<=2;j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n");
    //Pattern2
    for(int i=0 ; i<=2 ; i++){
        for(int j = 0 ; j <= i ; j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n");
    //Pattern 3
    for(int i=0 ; i<=2 ; i++){
        for(int j=0 ; j<=2 ; j++){
            if(i == 1 && j == 1){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    printf("\n\n");
    //Pattern 4

    for(int i=0 ;i<=2 ; i++){
        for(int j=0 ; j<=2;j++){
            if(( i == 1 && j == 0) || ( i == 1 && j == 2 ) || ( i == 2 && j == 0 ) || ( i == 2 && j == 2)){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0; //return 0 tells the successfull execution of the program.
}