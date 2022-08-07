
#include <stdio.h>
#include <conio.h>

int main()
{
    int array[4], i, n, max;

    printf("Enter the value in the array: ");

    for (i=0; i<4; i++)
    {
        printf("\nFor array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    max = array[0];

    for(i=0; i<4; i++)
    {
       //printf("\nArray value array[%d]: %d", i, array[i]);

        if(max < array[i])
        {
            max = array[i];
        }

    }

    printf("\n\nmax element of array: %d \n", max);

    return 0;
}
