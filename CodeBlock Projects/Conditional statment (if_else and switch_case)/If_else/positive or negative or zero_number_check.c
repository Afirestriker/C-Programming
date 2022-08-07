
#include <stdio.h>
#include <conio.h>

int main()
{
    int a;

    printf("Enter the number: ");
    scanf("%d", &a);

    if(a != 0)
    {
        if(a>0)
        {
            printf("\nEnter number %d is positive number \n", a);
        }
        else
            printf("\nEnter number %d is negative number \n", a);
    }
    else
    {
        printf("\nNumber %d is neutral \n", a);
    }


    return 0;
}

/*OUTPUT
Enter the number: 1

Enter number 1 is positive number

Process returned 0 (0x0)   execution time : 0.688 s
Press any key to continue.


Enter the number: 0

Number 0 is neutral

Process returned 0 (0x0)   execution time : 1.188 s
Press any key to continue.


Enter the number: -1

Enter number -1 is negative number

Process returned 0 (0x0)   execution time : 2.063 s
Press any key to continue.
*/
