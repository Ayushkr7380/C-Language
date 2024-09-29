#include<stdio.h>
int main(){
    int arr[4] = {1,2,12,45};
    int s,i,avail=0;
    printf("Search any number : ");
    scanf("%d",&s);

    for(i=0;i<=3;i++){
        if(s==arr[i]){
            avail = 1;
        }
    }
    if (avail == 1)
    {
        printf("%d is present in array.\n",s); 
    }
    else
    {       
        printf("%d is not present in array.\n",s);
    }
    return 0;
}