#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int countWord = 0,countSpace = 0;
    
    printf("Enter anything : ");
    fgets(str,sizeof(str),stdin);

    //Remove the "\n" added by fgets, if present

    int i = 0;
    while(str[i]!='\0'){
        if(str[i] == '\n'){
            str[i] = '\0';
            break;
        }
        i++;
    }

    int len = strlen(str);
    printf("Length of string is %d\n",len);

    int insideWord = 0;

    //Logic for countWord

    for(int j=0;str[j]!='\0';j++){
        if(str[j] == ' '){
            countSpace++;
            insideWord = 0;
        }
        else if(insideWord == 0){
            countWord++;
            insideWord = 1;
        }
        
    }
    printf("Length of spaces between the sentence is %d\n",countSpace);
    printf("Length of charcter in the sentence is %d\n",(len - countSpace));
    printf("Length of words in the sentence is %d\n",countWord);

    return 0;
}