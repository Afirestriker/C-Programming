
#include <stdio.h>
#include <conio.h>

int main()
{
    int a, s=0;

    printf("Enter the number: ");
    scanf("%d", &a);

    while(a>0)
    {
        s += a;
        a--;
    }

    printf("\nSum : %d \n", s);

    return 0;
}

/*OUTPUT

Enter the number: 8

Sum : 36

Process returned 0 (0x0)   execution time : 2.266 s
Press any key to continue.
*/
