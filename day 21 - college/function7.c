#include<stdio.h>
void prime1();
int main(){
    prime1();
    return 0;
}
void prime1(){
    int n,i=2,j,p;
    printf("Enter any number upto which prime will be check : ");
    scanf("%d",&n);
    printf("1 is Prime number.\n");
    do{
        p = 0;
        j = 2;
        while ( j <= i / 2)
        {
            if( i % j == 0 ){
                p=1;
                break;
            }
            j++;
        }
        if(p == 0){
            printf("%d is  prime number.\n",i);
        }
        else{
            printf("%d is not prime number.\n",i);
        }
        

        i++;
    }while(i<=n);
}