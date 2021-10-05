
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, f = 2;

    printf("\nEnter number: ");
    scanf("%d", &n);

    for(f; f <= n/2; f++)
    {
        if(n % f == 0)
        {
            printf("\nNot a prime number \n");
            break;
        }
    }

    if(f>n/2)
        printf("\nPrime number \n");

    return 0;
}
