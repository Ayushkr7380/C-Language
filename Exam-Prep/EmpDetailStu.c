#include<stdio.h>
struct Employee{
    int empId;
    char name[30];
    int age;
    float salary;
};
int main(){
    struct Employee emp[3];
    int flag = 0;
    //Store employees details..
    printf("Store Employees Details..\n\n");
    for(int i=0;i<3;i++){
        printf("Enter Employee Id : ");
        scanf("%d",&emp[i].empId);
        getchar(); //Consume the newline left by scanf
        printf("Enter Employee Name : ");
        fgets(emp[i].name,sizeof(emp[i].name),stdin);
        printf("Enter Employee Age : ");
        scanf("%d",&emp[i].age);
        printf("Enter Employee Salary : ");
        scanf("%f",&emp[i].salary);
        printf("\n");
    }

    //Display Employee Details..
    printf("Display Employees Details whose salary is more than 15000.\n\n");
    for(int i = 0;i<3;i++){
        if(emp[i].salary > 15000){
            flag = 1;
            printf("Employee Id --> %d\n",emp[i].empId);
            printf("Employee Name --> %s\n",emp[i].name);
            printf("Employee Salary --> %f\n",emp[i].salary);
            printf("Employee Age --> %d\n",emp[i].age);
        }
    }
    if(flag == 0){
        printf("Employees with more than 15000 does not exists.\n");
    }
    return 0;
}