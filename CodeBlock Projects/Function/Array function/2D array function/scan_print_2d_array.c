
#include <stdio.h>
#include <conio.h>

void print(int *);

int main()
{
    int array[2][2], i, j;

    printf("\nEnter the array element: ");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf(" %d ", &array[i][j]);
        }
    }


    printf("\nDisplaying the array element: ");
    print(array);

    return 0;
}

print(int a[2][2])
{
    int num1, num2;

    for(num1=0; num1<2; num1++)
    {
        for(num2=0; num2<2; num2++)
        {
            printf(" %d ", a[num1][num2]);
        }

        printf("\n");
    }

    printf("\n");
}
