
//date 22-11-2019
#include <stdio.h>
#include <conio.h>

int main()
{
    int r, c, k;
    char ch = 'A';

    for(r=1; r<=5; r++)
    {
        for(c=1; c<=r; c++)
        {
            printf("%d ",c);
        }
        printf("\n");
    }


    printf("\n\n New pattern \n\n");
    k = 5;
    for(r=1; r<=5; r++)
    {
        for(c=5; c>=r; c--)
        {
            printf("%d ", c);
        }
        printf("\n");
    }


    printf("\n\n New pattern \n\n");
    for(r=1; r<=5; r++)
    {
        for(c=1; c<=r; c++)
        {
            printf("%d ", r);
        }
        printf("\n");
    }


   printf("\n\n New pattern\n\n");

   for (r=1; r<=5; r++)
    {
        for(c=5; c>=r; c--)
        {
            printf("%d ",r);
        }
        printf("\n");
    }


    printf("\n\n New pattern with character\n\n");

    for(r=1; r<=5; r++)
    {
        for(c=1; c<=r; c++)
        {
            printf("%c ",ch);

            ch += 1;
        }
        printf("\n");
    }


        printf("\n\n New pattern with character\n\n");
    ch = 'A';
    for(r=1; r<=5; r++)
    {
        for(c=1; c<=r; c++)
        {
            printf("%c ",ch);

            ch -= 1;
        }
        printf("\n");
    }


    return 0;
}
