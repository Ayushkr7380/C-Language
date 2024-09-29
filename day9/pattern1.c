#include<stdio.h>
int main(){
    int i,j;
    int ascii = 65;
    for(i=0;i<5 ; i++){
        for(j=0;j<=i;j++){
            printf("%c",ascii);
            ascii+=1;
        }
        ascii = 65;
        printf("\n");
    }
    return 0;
}