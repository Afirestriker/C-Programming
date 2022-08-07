
#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, s;

    printf("Enter num1: ");
    scanf("%d", &a);

    printf("\nEner num2: ");
    scanf("%d", &b);

    if(a>b)
    {
        s = a - b;
        printf("\nsubtract: %d \n", s);
    }
    else
    {
        s = b - a;
        printf("\nsubtract: %d \n", s);
    }


    return 0;
}

/*OUTPUT
Enter num1: 2

Ener num2: 4

subtract: 2

Process returned 0 (0x0)   execution time : 1.297 s
Press any key to continue.
*/
