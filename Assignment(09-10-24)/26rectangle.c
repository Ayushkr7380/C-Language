#include<stdio.h>
int main(){
    int length = 20 , breadth = 10; //declare integer varaible length and breadth and initialize value in them.
    int area , perimeter; //declare integer varible area and perimeter and store the calculated area and perimeter in them.

    //calculate area of rectangle.
    area = length*breadth;

    //calculate perimeter of rectangle.
    perimeter = 2*(length + breadth);
    
    printf("Area of rectangle is %d.\n",area); //display the area of rectangle.
    printf("Perimeter of rectangle is %d.\n",perimeter); //display the perimeter of rectangle.

    return 0; //return 0 tells the successfull execution of the program.
}