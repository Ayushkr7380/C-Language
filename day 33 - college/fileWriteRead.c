#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    FILE *file;
    char name[50];
    float marks;

    printf("Enter your name : ");
    fgets(name,sizeof(name),stdin);
    printf("Enter your marks : ");
    scanf("%f",&marks);

    //Open the file in write mode
    file = fopen("storeDataFolder.txt","w");
    if(file == NULL){
        printf("Error opening the file !!!");

        return 1;
    }

    //Write data into files
    fprintf(file,"Name : %s Marks : %f",name,marks);
    fclose(file);

    //Open the file in read mode
    file = fopen("storeDataFolder.txt","r");
    if(file == NULL){
        printf("Error opening the  9*file !!");
        return 1;
    }


    printf("\nContent of the file:\n");
    // char line[128];
    // while (fgets(line, sizeof(line), file) != NULL) {
    //     printf("%s", line); // Print each line
    // }
    char ch;
    while((ch=fgetc(file)) != EOF){
        putchar(ch);
    }

    fclose(file);
    return 0;
}