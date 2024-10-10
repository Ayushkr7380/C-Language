#include<stdio.h>
int main(){
    float length , breadth , area , preimeter ; //decalare varaible length to store rectangle's length , breadth to store rectangle's breadth , area to store rectangle's area and preimeter to store rectangle's preimeter.

    printf("Enter length of the rectangle : "); //prompt user to enter length of the rectangle.
    scanf("%f",&length); //read and store user's input value in length variable.

    printf("Enter breadth of the rectangle : "); //prompt user to enter breadth of the rectangle.
    scanf("%f",&breadth); //read and store user's input value in breadth variable.

    area = length * breadth; //calculate the area of rectangle.
    printf("Area of rectangle is %f\n",area); //print the area of rectangle in terminal.

    preimeter = 2*(length + breadth); //calculate the preimeter of rectangle.
    printf("Preimeter of rectangle is %f\n",preimeter); //print the preimeter of rectangle in terminal.

    return 0; //return 0 tells the successfull execution of the program.
}