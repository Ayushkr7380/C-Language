#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fptr1 , *fptr2;
    char fileName[100],c;
    
    
    printf("Enter the filename to open for reading.\n");
    scanf("%s",fileName);
    //Open one file for reading
    fptr1 = fopen(fileName,"r");
    if(fptr1 == NULL){
        printf("Error in opening the file %s",fileName);
        exit(0);
    }

    printf("Enter the filename to open for writing.\n");
    scanf("%s",fileName);
    //Open another file for writing
    fptr2= fopen(fileName,"w");
    if(fptr2 == NULL){
        printf("Error in opening the file %s",fileName);
        exit(0);
    }

    //Read the content from file1
    
    while((c = fgetc(fptr1))!= EOF){
        fputc(c,fptr2);
    }

    printf("Content copied to %s",fileName);
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}



