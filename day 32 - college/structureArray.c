#include<stdio.h>
struct stu_details{
    int roll;
    char *name;
    float marks;
};
int main(){
    struct stu_details stu[3] = {{1,"Ayush",12.4},{2,"Abhi",4.5},{3,"Lucky",21.3}};
    for(int i=0;i<3;i++){
        printf("%d | %s | %f \n",stu[i].roll,stu[i].name,stu[i].marks);
    }
    return 0;
}