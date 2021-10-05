
/*fibonacci series date 29-11-2019*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int l, a, b, c, i;

    printf("Enter the series length: ");
    scanf("%d", &l);

    a=0;
    b=1;

    printf("\n\t%d %d", a, b);

    for(i=1; i<=l-2; i++)
    //while(l-2>0)
    {
        c = a+b;
        printf(" %d", c);

        a = b;
        b = c;
        //l--; //using while loop
    }

    printf("\n");

    return 0;
}
