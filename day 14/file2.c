#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("example.txt","w");
    char str[123] = "What's up!";
    fprintf(ptr,"%s",str);
    fclose(ptr);
    return 0;
}