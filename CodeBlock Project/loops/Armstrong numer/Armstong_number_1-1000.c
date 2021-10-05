
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, t, d, s;

    printf("Armstrong number from 1 - 1000\n\n");

    for(n=1; n<=1000; n++)
    {
        t = n;
        s = 0;

        while(t>0)
        {
            d = t%10;

            s += d*d*d;

            t = t/10;
        }

        if(s==n)
            printf("\n\t%d\n",n);
    }

    return 0;
}
