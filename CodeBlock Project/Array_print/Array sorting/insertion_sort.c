
/*date 21-12-2019*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int a[20], n, i, key, j;

    printf("\nEnter the total element: ");
    scanf("%d", &n);

    printf("\nEnter the array elements \n");
    for(i=0; i<n; i++)
    {
        printf("\nA[%d]: ", i);
        scanf("%d", &a[i]);
    }


    printf("\nAfter insertion sort \n");

    for(i=0; i<n; i++)
    {
        key = a[i];
        j = i - 1;

        while(j>=0 && a[j] > key)
        {
            a[j+1] = a[j];
            j = j-1; //j--;
        }

        a[j+1] = key;   //here a[j+1] is a[0] always
    }




    for(i=0; i<n; i++)
    {
        printf(" %d ", a[i]);
    }
    printf("\n");


    return 0;
}
