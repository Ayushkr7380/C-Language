#include<stdio.h>
#include<string.h>
int stringLen(char *str){
    int length = 0;
    while(*str != '\0'){
        length++;
        str++;
    }
    return length;
}

int main(){
    char str[100];
    printf("Enter Anything : ");
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    if(str[len -1]=='\n'){
        str[len -1]='\0';
        len--;
    }

    int length = stringLen(str);
    printf("Length of the string is %d",length);
}