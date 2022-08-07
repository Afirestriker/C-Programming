
/* Create a structure named "Book" with members - book id, title and price. Create array of 5 books. Accept data for books
    and display them, Display the names of books with price > 150.
*/

#include <stdio.h>

struct book
{
    int id, price;
    char title[30];
}book[5];

int main()
{

    int i, n = 5;

    printf("\nEnter the book detail \n");
    for(i=0; i<n; i++)
    {
        printf("\nEnter book detail %d: \n", i+1);
        printf("\nEnter book id: ");
        scanf("%d", &book[i].id);
        printf("Enter book title: ");
        scanf("%s", book[i].title);
        printf("Enter book price: ");
        scanf("%d", &book[i].price);
    }

    printf("\n\nDisplaying book details: \n");
    for(i=0; i<n; i++)
    {
        printf("\nDisplaying book detail %d \n", i+1);
        printf("\n\nBook id   : %d", book[i].id);
        printf("\nBook title: %s", book[i].title);
        printf("\nBook price: %d", book[i].price);
    }

    printf("\n\nDisplaying book detail with price above 150 \n");
    for(i=0; i<n; i++)
    {
        if(book[i].price > 150)
        {
            printf("\n\nBook id   : %d", book[i].id);
            printf("\nBook title: %s", book[i].title);
            printf("\nBook price: %d", book[i].price);
        }
    }


    printf("\n");
    return 0;
}
