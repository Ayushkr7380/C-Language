#include<stdio.h>
int main(){
    char name[] = {'A','Y','U','S','H'};
    printf("First name is %s",name); //It will Print AYUSH@ , here after H their could be any thing of the memeory space.
    //It is occuring because at the end of the character array it takes "\0" as the end of character. 
    //To handle this we could either write "\0" as a last element of the character array or create charcter array in another way.

    //add "\0" at the end of the charcter array.
    char name1[] ={'A','T','U','L','\0'};
    printf("\nSecond name is %s",name1);

    //Create character array in another way.
    char name2[] ="Ayush";
    printf("\nThird name is %s",name2);

    return 0;
}