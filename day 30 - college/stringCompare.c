#include<stdio.h>
#include<string.h>
int main(){
    char name1[10];
    char name2[10];

    printf("Enter 1st name : ");
    fgets(name1,sizeof(name1),stdin);

    printf("Enter 2nd name : ");
    fgets(name2,sizeof(name2),stdin);

    int result = strcmp(name1,name2);
    if(result == 0){
        printf("%s is equal to %s",name1,name2);
    }
    else{
        printf("%s is not equal to %s",name1,name2);
    }

    return 0;
}