
//date 22-11-2019
#include <stdio.h>
#include <conio.h>

int main()
{
    int r, c, cc, space;

    for(r=1; r<=5; r++)
    {

        for(space=5; space>=r; space--)
        {
            printf(" ");
        }

        for(c=1; c<=r; c++)
        {
            printf("*");
        }

        for(cc=1; cc<=r; cc++)
        {
            printf("*");
        }

        printf("\n");

    }




    return 0;
}
