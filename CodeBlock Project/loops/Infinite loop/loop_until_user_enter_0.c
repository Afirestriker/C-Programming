
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, s=0;

    printf("Infinite Loop \n");

    while(1)
    {
        printf("\n\nEnter the number: ");
        scanf("%d", &n);

            if(n == 0)
                {
                  printf("\nInvalid input. Validating programmne...\n");
                  break;
                }

         s += n;

         printf("sum = %d", s);
         continue;

    }

    printf("Bye..Bye...\n");

    return 0;
}
