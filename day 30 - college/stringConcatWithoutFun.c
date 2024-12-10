#include<stdio.h>
int main(){
    char name1[] = {'A','B','H','I','\0'};
    char name2[] = {'R','A','J','\0'};
    char name3[10];
    for(int i=0;i<5;i++){
        name3[i] = name1[i];
    }
    for(int j=0;j<4;j++){
        int k = j + 4;
        name3[k] = name2[j];
    }
    printf("%s",name3);
    return 0;
}