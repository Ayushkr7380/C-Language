#include<stdio.h>
struct Personal{
    char *name;
    int roll;
};
struct Professional{
    char *name;
    int roll;
    struct Personal stuPer;
};
int main(){
    struct Professional stuPro;
    stuPro.stuPer.name = "Ayush";
    stuPro.stuPer.roll = 12;

    stuPro.name = "Abhi";
    stuPro.roll = 11;

    printf("--- Personal Details ---\n");
    printf("%d | %s \n",stuPro.stuPer.roll,stuPro.stuPer.name);
    printf("--- Professional Details ---\n");
    printf("%d | %s \n",stuPro.roll,stuPro.name);

    return 0;
}