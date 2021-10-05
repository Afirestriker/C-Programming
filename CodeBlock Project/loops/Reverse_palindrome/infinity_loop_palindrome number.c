
//infinity loop palindrome number
//25-11-2019
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, t, d, rev=0;

    printf("Enter the number and check if the number is palindrome \n");

    while(1)
    {
        printf("\nEnter the number: ");
        scanf("%d",&n);

        if(n==0)
        {
            printf("\nNot a valid input..validating programne...\n");
            break;
        }

        t = n;
        rev = 0;

            while(t>0)
            {
                d = t%10;

                rev = (rev*10) + d;

                t /= 10;
            }

            if(rev==n)
                printf("It is a palindrome number \n");
            else
                printf("Not a palindrome number \n");

    }

    printf("Bye..Bye... \n");

    return 0;
}
