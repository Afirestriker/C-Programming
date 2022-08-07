
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, a[20], i, j, t;

    printf("Enter the range of array: ");
    scanf("%d", &n);

    printf("\nEnter the sets: ");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("\n");

    for(i=1; i<n; i++)
    {
        t = a[i];
        j = i - 1;

        while(j >= 0 && a[j] > t)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = t;
    }

    for(i=0; i<n; i++)
        printf("%d ", a[i]);

    return 0;
}
