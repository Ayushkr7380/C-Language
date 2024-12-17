#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int len,flag=1;
    printf("Enter anything : ");
    fgets(str,sizeof(str),stdin);

    len = strlen(str);

    if(str[len -1] == '\n'){
        str[len - 1] = '\0';
        len--;
    }
    printf("%d\n",len);

    //Check for Palindrome
    for(int i=0;i<len/2;i++){
        if(str[i] != str[len -i -1]){
            flag = 0;
            break;
        }
    }
     // Output result
    if (flag) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is NOT a palindrome.\n");
    }
    return 0;
}