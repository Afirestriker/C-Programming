
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, f, flag = 0;

    printf("Enter the number: ");
    scanf("%d",&n);

    for(f=2; f<n/2; f++)
    {
        if(n%f==0)
        {
            flag = 1;
            break;
        }
    }

    if(flag!=0)
        printf("\nNot a prime number \n");
    else
        printf("\nPrime number \n");

    return 0;
}

/*OUTPUT
Enter the number: 3

Prime number

Process returned 0 (0x0)   execution time : 1.266 s
Press any key to continue.
*/

/*OUTPUT
Enter the number: 6

Not a prime number

Process returned 0 (0x0)   execution time : 0.578 s
Press any key to continue.
*/
