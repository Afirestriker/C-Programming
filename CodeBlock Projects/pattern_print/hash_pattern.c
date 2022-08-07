
#include <stdio.h>
#include <conio.h>

int main()
{
    int r, c;

    printf("\n Hash Pattern \n");

    for(r=1; r<=5; r++)
    {
        for(c=1; c<=r; c++)
        {
            printf("# ");
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
