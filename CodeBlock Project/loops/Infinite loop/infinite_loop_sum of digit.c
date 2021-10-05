
//date 25-11-2019
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, s = 0, d, t;

    printf("Infinite loop\n");

    while(1)
    {
        printf("\nEnter the number: ");
        scanf("%d", &n);

        if(n==0)
        {
            printf("\nInvalid Input...validating programmne \n");
            break;
        }

        t = n;
        s = 0;
        while(t>0)
        {
            d = t%10;
            s += d;
            t /= 10;
        }

        printf("Sum = %d \n", s);
    }

    printf("Bye..Bye...\n");

    return 0;
}
