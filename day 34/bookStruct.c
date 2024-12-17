#include<stdio.h>
struct book{
    char author[50];
    char publisher[100];
    float price;
    int pages;
} b;
int main(){
    printf("Enter the name of the author : ");
    fgets(b.author,sizeof(b.author),stdin);

    printf("Enter the name of the publisher : ");
    fgets(b.publisher,sizeof(b.publisher),stdin);

    printf("Enter the price of the book : ");
    scanf("%f",&b.price);

    printf("Enter the pages of the book : ");
    scanf("%d",&b.pages);

    printf("---Book Details---\n");
    printf("Author Name --> %s",b.author);
    printf("Publisher Name --> %s",b.publisher);
    printf("Price of the book --> %.2f\n",b.price);
    printf("Total number of pages --> %d\n",b.pages);

    return 0;
}