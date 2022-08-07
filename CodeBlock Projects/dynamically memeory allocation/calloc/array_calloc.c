
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int *ptr_array, n, i;

    printf("\nEnter number of element to stored: ");
    scanf("%d", &n);

    ptr_array = (int *)calloc(n, sizeof(int));
    if(ptr_array == NULL)
    {
        printf("\nMemory allocation not successful \n");
        exit(1);
    }

    printf("\nEnter arrray element: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &ptr_array[i]);
    }

    printf("\nDisplaying array element: ");
    for(i=0; i<n; i++)
    {
        printf(" %d, ", ptr_array[i]);
    }

    printf("\n");

    return 0;
}
