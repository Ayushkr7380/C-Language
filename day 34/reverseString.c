#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int len;
    printf("Enter anything : ");
    fgets(str,sizeof(str),stdin);

    len = strlen(str);
    if(str[len -1] == '\n'){
        str[len -1] == '\0';
        len--;
    }

    //Reverse String
    for(int i=0;i<len/2;i++){
        char temp = str[i];
        str[i] = str[len - i -1];
        str[len -i -1] = temp;
    }

    //Reversed Output 
    printf("Reversed String is %s",str);
    return 0;
}