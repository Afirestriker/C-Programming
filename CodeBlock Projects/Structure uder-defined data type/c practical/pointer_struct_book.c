
#include <stdio.h>
#include <conio.h>

struct book
{
    int id, price;
    char name[20];
}book;

struct book *ptr_book = &book;

int main()
{
    printf("\nEnter the book detail \n");
    printf("\nEnter book id: ");
    scanf("%d", &book.id);
    printf("Enter book name: ");
    scanf("%s", book.name);
    printf("Enter book price: ");
    scanf("%d", &book.price);


    printf("\n\nDisplaying book detail using pointer to a structure \n");
    printf("\nEnter book id   : %d", ptr_book->id);
    printf("\nEnter book name : %s", ptr_book->name);
    printf("\nEnter book price: %d \n", ptr_book->price);

    printf("\n");
    return 0;
}
