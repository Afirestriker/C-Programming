
#include <stdio.h>
#include <conio.h>

int main()
{
    int s, num1, num2;

    printf("Enter num1: ");
    scanf("%d",&num1);

    printf("Enter num2: ");
    scanf("%d",&num2);

    s = functioncall(num1, num2);

    printf("\nsum: %d \n",s);

    return 0;
}

    int functioncall(int i, int j)
    {
        int sum;
        sum = i +j;

        return sum;
    }

/*OUTPUT
Enter num1: 2
Enter num2: 4

sum: 6

Process returned 0 (0x0)   execution time : 2.016 s
Press any key to continue.
*/
