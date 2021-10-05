

/*c program to swap number by call by reference*/
//date - 29-12-2019
#include <stdio.h>
#include <conio.h>

void swap_by_reference(int *x, int *y);

int main()
{
    int a, b;

    printf("\nEnter number 1: ");
    scanf("%d", &a);

    printf("\nEnter number 2: ");
    scanf("%d", &b);

    swap_by_reference(&a, &b);

    printf("\nAfter swap: \n");
    printf("\n Number1: %d \n Number2: %d \n", a, b);

    printf("\n\n");
    return 0;
}

void swap_by_reference(int *x, int *y)
{
                       //int temp;
    *x = *x + *y;      //temp = *x;
    *y = *x - *y;      //*x = *y;
    *x = *x - *y;      //*y = temp;
}


/*OUTPUT

Enter number 1: 4

Enter number 2: 8

After swap:

 Number1: 8
 Number2: 4



Process returned 0 (0x0)   execution time : 1.141 s
Press any key to continue.
*/
