#include<stdio.h>
struct employeeDetails{
    int empID;
    char empName[30];
    int empIncome;
};
int main(){
    struct employeeDetails emp;
    
    printf("Enter employee id : ");
    scanf("%d",&emp.empID);

    getchar();
    
    printf("Enter employee name : ");
    fgets(emp.empName,sizeof(emp.empName),stdin);

    for(int i=0;i!='\0';i++){
        if(emp.empName[i] == '\n'){
            emp.empName[i] = '\0';
            break;
        }
    }

    
    printf("Enter employee salary : ");
    scanf("%d",&emp.empIncome);

    //Display the  details of employees..
    printf("EmpID : %d \n EmpName : %s \n EmpIncome : %d",emp.empID,emp.empName,emp.empIncome);

    return 0;
}