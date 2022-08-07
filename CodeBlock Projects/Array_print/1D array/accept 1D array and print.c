
#include <stdio.h>
#include <conio.h>

int main()
{
    int array[4], i;

    printf("Enter the array number: \n");

    for(i=0; i<4; i++)
    {
        printf("\nEnter number array[%d] : ", i);
        scanf("%d", &array[i]);
    }

    for(i=0; i<4; i++)
    {
        printf("\nArray[%d] : %d \n", i, array[i]);
    }


    return 0;
}
