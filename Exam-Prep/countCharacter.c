#include<stdio.h>
#include<string.h>
void stringCount(char *ch);
int main(){
    char ch[20];
    printf("Enter any string : ");
    fgets(ch,sizeof(ch),stdin);

    for(int i=0;ch[i]!='\0';i++){
        if(ch[i] == '\n'){
            ch[i] = '\0';
        }
    }

    //Using predefined strlen()
    // int len = strlen(ch);
    // printf("Length of string is %d",len);

    //Without using predefined function.
    stringCount(ch);

    return 0;
}
void stringCount(char *ch){
    int count=0;
    // int i=0;
    while(*ch!='\0'){
        count++;
        ch++;
    }
    printf("L - %d",count);
}