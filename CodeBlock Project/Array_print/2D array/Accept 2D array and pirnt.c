
#include <stdio.h>
#include <conio.h>

int main()
{
    int array[3][3], i, j;

    printf("Enter number for 2D array \n");

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
            printf("\nArray[%d][%d]: %d \n", i, j, array[i][j]);
        }
    }


    return 0;
}
