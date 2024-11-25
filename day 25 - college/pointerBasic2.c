#include<stdio.h>
int main(){
    int a;
    int *ap;
    char b;
    char *bp;
    float c;
    float *cp;
    double d;
    double *dp;

    printf("Size of ap : %d \n",sizeof(ap));
    printf("Size of bp : %d \n",sizeof(bp));
    printf("Size of cp : %d \n",sizeof(cp));
    printf("Size of dp : %d \n",sizeof(dp));
    return 0;
}