
//Infinity loop for prime number checking
//date created 29-11-2019
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, f, flag = 0;

    printf("Enter the number to check if the number is prime number \n");

    while(1)
    {
        flag = 0;

        printf("\nEnter the number: ");
        scanf("%d",&n);

        if(n==0)
        {
            printf("Invalid input..Validating programne... \n");
            break;
        }

        for(f=2; f<=n/2; f++)
        {
            if(n%f==0)
            {
                flag = 1;
                break;
            }
        }

        if(flag!=0)
            printf("Not a prime number \n");
        else
            printf("Prime number \n");
    }

    return 0;
}
