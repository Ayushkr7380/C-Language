#include<stdio.h>
int main(){
    FILE *f1;
    char ch;
    char name[20];
    //Reading the file..
    f1 = fopen("file2.txt","r");
    if(f1 == NULL){
        printf("Failed to open the file..");
        return 1;
    }

    // char ch = fgetc(f1);
    // printf("%c",ch);

    // while((ch=fgetc(f1)) !=EOF){
    //     printf("%c",ch);
    // }

    fscanf(f1,"%s",name);

    printf("%s",name);

    fclose(f1);

    return 0;
}