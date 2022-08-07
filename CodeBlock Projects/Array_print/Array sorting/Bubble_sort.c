
/*date 21-12-2019*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int a[20], n, i, repeat, j;

    printf("Enter the range of numbers: ");
    scanf("%d", &n);

    printf("Enter the elements: \n");
    for(i=0; i<n; i++)
    {
        printf("\na[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nElement after Bubble sort:  \n");

    //sorting start here
    for(repeat=0; repeat<n/*-1*/; repeat++) //repeat bubble sort cycle
    {
        for(i=0; i<n; i++)
        {
            j = i + 1;

            if(a[i] > a[j] && j<n)
              {
                 a[i] = a[i] + a[j];
                 a[j] = a[i] - a[j];
                 a[i] = a[i] - a[j];
              }
        }
    }

    //sorting ends here

    for(i=0; i<n; i++)//print sorted array
    {
        //printf("A[%d]: %d \n", i, a[i]);
        printf(" %d ", a[i]);
    }

        printf("\n");


    return 0;
}


/*OUTPUT
Enter the range of numbers: 4
Enter the elements:

a[0]: 2

a[1]: 1

a[2]: 8

a[3]: 6

Element after Bubble sort:
 1  2  6  8

Process returned 0 (0x0)   execution time : 9.188 s
Press any key to continue.
*/
