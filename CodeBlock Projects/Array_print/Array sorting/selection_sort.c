
/*date 21-12-2019*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int a[20], n, i, /*r,*/ j;

    printf("Enter the total element : ");
    scanf("%d", &n);

    printf("\nEnter the element in array: \n");

        for(i=0; i<n; i++)
        {
            printf("\na[%d] : ", i);
            scanf("%d", &a[i]);
        }

    printf("\nAfter Selection sort \n");

        //for(r=0; r<n-1; r++) //repeat whole array sorting loop
        //{
        //sorting start here
            for(i=0; i<n; i++)
                {
                    for(j=1+i; j<n; j++)
                    {
                        if(a[i] > a[j])
                        {
                            a[i] = a[i] + a[j]; //sorting without third variable
                            a[j] = a[i] - a[j];
                            a[i] = a[i] - a[j];
                        }
                    }
                }
        //sorting end here
        //}

    for(i=0; i<n; i++)
    {
        //printf("a[%d]: %d \n", i, a[i]);
        printf(" %d ", a[i]);
    }

    printf("\n");

    return 0;
}
