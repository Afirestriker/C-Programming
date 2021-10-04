
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i;

    printf("\nEnter the range of array: ");
    scanf("%d", &n);

    int a[n];

    printf("\nEnter the array value: \n");

    for(i=0; i<n; i++)
    {
        printf("\n a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nprint of array element: \n");
    for(i=0; i<n; i++)
    {
        printf("\n a[%d]: %d", i, a[i]);
        printf("\n");
    }





    return 0;
}
