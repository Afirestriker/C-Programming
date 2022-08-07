
#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, array[3][3], s = 0;

    printf("Enter 2D array element \n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\nEnter array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            s += array[i][j];
        }
    }

    printf("\nsum of 2D array element: %d \n", s);


    return 0;
}
