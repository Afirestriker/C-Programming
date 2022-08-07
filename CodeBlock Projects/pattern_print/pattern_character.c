
#include <stdio.h>
#include <conio.h>

int main()
{
    int r, c;
    char ch = 'A';

    printf("\n In up-order from 'A' \n");
    for(r=1; r<5; r++)
      {
         for(c=1; c<=r; c++)
        {
            printf("%c ", ch);
            ch += 1;
        }
        printf("\n");
      }

    printf("\n\n In reverse order from 'A' \n\n");
    ch = 'A';
    for(r=1; r<5; r++)
    {
        for(c=1; c<=r; c++)
        {
            printf("%c ", ch);
            ch -= 1;
        }
        printf("\n");
    }

    printf("\n\n");


    return 0;
}
