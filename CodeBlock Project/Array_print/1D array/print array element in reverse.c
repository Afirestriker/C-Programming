
#include <stdio.h>
#include <conio.h>

int main()
{
    int i, array[4];

    printf("Enter the value for array: \n");

    for(i=0; i<4; i++)
    {
        printf("Enter value for array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("\nArray value in reverse order: \n");

    i -= 1;

    while(i>=0)
    {
        printf("\nvalue of array[%d]: %d", i, array[i]);

        i--;
    }


    return 0;
}
