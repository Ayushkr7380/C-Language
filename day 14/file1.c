//Reading a file    
#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("example.txt","r");
    char str[123];
    fscanf(ptr,"%s",str);
    printf("%s",str);
    return 0;
}