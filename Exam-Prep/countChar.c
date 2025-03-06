#include<stdio.h>
int main(){
    char str1[]="Ayush kumar is the best b@oy";
    int character=0,space=0;
    for(int i=0;str1[i]!='\0';i++){
        if(str1[i] !=' '){
            character++;
        }
        else{
            space++;
        }
 }
    printf("Character : %d\n",character);
    printf("Space : %d\n",space);
    return 0;
}