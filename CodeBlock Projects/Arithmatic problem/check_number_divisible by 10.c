
#include <stdio.h>
#include <conio.h>

int main()
{
    int n;

    printf("\nEnter the number: ");
    scanf("%d", &n);

    if(n != 0)
    {
        if(n % 10 == 0)
            printf("\nNumber %d is divisible of 10 \n", n);
        else
            printf("\nNumber %d is not divisible of 10 \n", n);
    }
    else
        printf("\nEntered number is invalid \n");


    return 0;
}

/*OUTPUT

Enter the number: 10

Number 10 is divisible of 10

Process returned 0 (0x0)   execution time : 3.297 s
Press any key to continue.
*/
