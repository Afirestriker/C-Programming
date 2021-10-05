
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i, s=0;

    printf("Enter the number: ");
    scanf("%d", &n);

    for(i=1; i<=n/2; i++)   //for(i=n/2; i>0; i--)
    {
        if(n%i == 0)
            printf(" %d", i);
        s = s + i;
    }

    if(s == n)
        printf("\n\tNumber %d is a perfect number", n);
    else
        printf("\n\tNumber %d is not a perfect number", n);

    return 0;
}

