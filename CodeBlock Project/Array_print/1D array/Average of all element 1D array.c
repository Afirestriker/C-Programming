
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i, j, a[20], s=0;
    float average;

    printf("\nEnter the total number of element: ");
    scanf("%d", &n);

    printf("Enter all the element: \n");

        for(i=0; i<n; i++)
        {
            j = 1;
            j += i;

            printf("\nElement %d: ", j);
            scanf("%d", &a[i]);

            s += a[i];
        }

    printf("\n\nsum of all element : %d \n", s);

    average = s/n;
    printf("\nAverage : %f \n", average);


    return 0;
}
