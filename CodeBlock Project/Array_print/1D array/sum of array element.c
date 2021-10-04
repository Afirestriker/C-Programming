
#include <stdio.h>
#include <conio.h>

int main()
{
    int i, array[4], s=0;

    printf("Sum of array element \n Enter the array value: \n");

    for(i=0; i<4; i++)
    {
        printf("value array[%d]: ", i);
        scanf("%d", &array[i]);

        //s = s + array[i];
    }

    for(i=0; i<4; i++)
    {
        s = s + array[i];
    }

    printf("\nSum of array element: %d \n", s);


    return 0;
}
