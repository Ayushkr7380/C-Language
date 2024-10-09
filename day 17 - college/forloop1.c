#include<stdio.h>
int main(){
    
    printf("Pattern 1\n");

    //Print 1 to 20
    for(int i=1;i<=20;i++){
        printf("%d",i);
    }
    printf("\n");
    //Print 20 to 1
    for(int i=20;i>=1;i--){
        printf("%d",i);
    }
    printf("\n");
    printf("Pattern 2\n");
    
    for(int i=1;i<=20;i++){        printf("%d \n",i);
    }
    
    //Print 20 to 1
    for(int i=20;i>=1;i--){
        printf("%d \n",i);
    }

    printf("Pattern 3\n");

        //Print 1 to 20
    for(int i=1;i<=20;i++){
        printf("%d\t",i);
    }
    
    //Print 20 to 1
    for(int i=20;i>=1;i--){
        printf("%d \n",i);
    }
    return 0;
}