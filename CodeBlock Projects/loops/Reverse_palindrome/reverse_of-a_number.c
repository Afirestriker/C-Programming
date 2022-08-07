
//date 25-11-2019
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, d, rev=0, t;

    do
    {

    rev =0;
    printf("\nEnter a number: ");
    scanf("%d",&n);

    t = n;
    while(t>0)
    {
        d = t%10;

        rev = (rev*10) + d;

        t = t/10;
    }

    printf("\nReverse of number: %d\n", rev);

    }while(1);

    return 0;
}
