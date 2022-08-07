
#include <stdio.h>
#include <conio.h>

int main()
{
    int c, s, result;

    printf("Enter the cost price: ");
    scanf("%d", &c);

    printf("\nEnter the selling price: ");
    scanf("%d", &s);

    result = s - c;

    if(result == 0)
    {
        printf("\nNor profit neither loss \n");
    }
    else if(result > 0)
    {
        printf("\nProfit \n");
    }
    else
    {
        printf("\nLoss \n");
    }

    return 0;
}

/*OUTPUT
Enter the cost price: 6

Enter the selling price: 8

Profit

Process returned 0 (0x0)   execution time : 2.578 s
Press any key to continue.
*/
