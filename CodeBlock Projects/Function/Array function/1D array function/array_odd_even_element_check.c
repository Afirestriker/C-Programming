
#include <stdio.h>
#include <conio.h>

void odd_even(int *, int);

int main()
{
    int arr[5] = {10, 13, 16, 19, 26};

    odd_even(arr, 5);

    return 0;
}


void odd_even(int a[], int length)
{
    int i;

    for(i=0; i<length; i++)
    {
        if(a[i] % 2 == 0)
            printf(" \n %d is even", a[i]);

        else
            printf(" \n %d is odd", a[i]);
    }

    printf("\n\n");
}


/*output


 10 is even
 13 is odd
 16 is even
 19 is odd
 26 is even


Process returned 0 (0x0)   execution time : 0.109 s
Press any key to continue.
*/
