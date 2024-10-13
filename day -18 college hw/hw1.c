#include<stdio.h>
int main(){
    int n1;
    int i=0;
    while (i<3)
    {
        printf("Enter any number : ");
        scanf("%d",&n1);
        
        if(n1%2 == 0){
            printf("%d is Even.\n",n1);
        }
        else{
            printf("%d is Odd.\n",n1);
        }

        i++;
    }
    return 0;  
}