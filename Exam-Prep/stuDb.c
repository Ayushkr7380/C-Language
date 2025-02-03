#include<stdio.h>
struct stuDetails{
    char name[100];
    int roll;
    char city[100];
};

int main(){
    int numOfStu;
    printf("Enter the number of student : ");
    scanf("%d",&numOfStu);

    struct stuDetails stu[numOfStu];

    for(int i=0;i<numOfStu;i++){
        printf("Enter roll : ");
        scanf("%d",&stu[i].roll);

        getchar();

        printf("Enter name : ");
        fgets(stu[i].name,sizeof(stu[i].name),stdin);

        //Remove the newline added by fgets
        int j=0;
        while(stu[i].name[j] != '\0'){
            if(stu[i].name[j] == '\n'){
                stu[i].name[j] = '\0';
                break;
            }
            j++;
        }

        printf("Enter city : ");
        fgets(stu[i].city,sizeof(stu[i].city),stdin);

        //Remove the newline added by fgets
        int k=0;
        while(stu[i].city[k] != '\0'){
            if(stu[i].city[k] == '\n'){
                stu[i].city[k] = '\0';
                break;
            }
            k++;
        }
        printf("\n");
    }

    //Declare a pointer variable to open file.
    FILE *ptr;
    ptr = fopen("file1.txt","w");
    if(ptr == NULL){
        printf("Failed to open file.\n");
        return 1;
    }

    //Store the data of student in the file.
    for(int i=0;i<numOfStu;i++){
        fprintf(ptr,"Roll - %d || Name - %s || City - %s \n",stu[i].roll,stu[i].name,stu[i].city);
    }
    
    //Close the file
    fclose(ptr);

    printf("Student details saved to file1.txt successfully.\n");

    
    return 0;
}