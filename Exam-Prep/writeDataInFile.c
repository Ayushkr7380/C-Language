#include<stdio.h>
int main(){
    FILE *fptr1;
    char name[30];
    float marks;
    fptr1 = fopen("file2.txt","w");
    if(fptr1 == NULL){
        printf("Error opening the file.");
        return 1;
    }

    //Enter Name and Marks
    printf("Enter your name : \n");
    scanf("%s", name);

    printf("Enter marks : \n");
    scanf("%f",&marks);

    // Writing to the file
    fprintf(fptr1, "Name: %s\n", name);
    fprintf(fptr1, "Marks: %.2f\n", marks);

    fclose(fptr1);  // Close the file
    printf("\nData has been successfully written to 'file2.txt'.\n");

    return 0;
}