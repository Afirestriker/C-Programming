
/** accepting and printing pointer array with two methods, method-1 is more direct to use as while using method-2
    after the loop run ends pointer variable has to assign to its based address again
*/

#include <stdio.h>

int main()
{
    int num[20], *numbers, n, i;

    numbers = num;

    printf("\nEnter the array range: ");
    scanf("%d", &n);

    printf("\n\nMETHOD 1 \n");
    printf("\n\nEnter the array elements: ");

    for(i=0; i<n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("\n\nDisplaying the array elements: \n");
    for(i=0; i<n; i++)
    {
        printf("value of *numbers[i] = %d \n", numbers[i]);
        printf("value of &numbers[i]  = %d \n\n", &numbers[i]);
    }


    printf("\n\nMETHOD 2 \n");

   /* printf("\nEnter the array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d, ", &*numbers);  ///for scanf("%d", &*numbers);
        numbers++;
    }

    numbers = num;   ///get numbers point to num based address
    */


    printf("\nDisplaying the array elements: \n");
    for(i=0; i<n; i++)
    {
        printf("value of *numbers = %d \n", *numbers);  ///for scanf("%d", &*numbers);
        printf("value of numbers  = %d \n\n", numbers);
        numbers++;
    }

    numbers = num;   ///get numbers point to num based address


    printf("\n\n");
    return 0;
}


/**OUTPUT


Enter the array range: 4


METHOD 1


Enter the array elements: 1 2 3 4


Displaying the array elements: 1, 2, 3, 4,

METHOD 2

Displaying the array elements: 1, 2, 3, 4,


Process returned 0 (0x0)   execution time : 3.000 s
Press any key to continue.
*/
