
#include <stdio.h>
#include <conio.h>

int main()
{
    int n;

    printf("\nEnter the number: ");
    scanf("%d", &n);

    if(n != 0)
    {
        if(n % 5 == 0)
            printf("\nNumber %d is divisible of 5 \n", n);
        else
            printf("\nNumber %d is not divisible of 5 \n", n);
    }
    else
        printf("\nEntered number is invalid \n");


    return 0;
}

/*OUTPUT

Enter the number: 5

Number 5 is divisible of 5

Process returned 0 (0x0)   execution time : 1.641 s
Press any key to continue.
*/
