
#include <stdio.h>
#include <conio.h>

int main()
{
    int i, array[4], min, t=0;

    printf("Find minimum element from array \n Enter the array element: \n");

    for(i=0; i<4; i++)
    {
        printf("\nvalue array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    min = array[0];

    for(i=0; i<4; i++)
    {
        if(min > array[i])
        {
            min = array[i];
            t = i;
        }
    }

    printf("\nminimum value at array[%d]: %d \n", t, min);


    return 0;
}
