
//prime number from 1 -1000
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, f, flag = 0;

    printf("Prime number from 1 - 1000 \n\n");

    for(n=1; n<=1000; n++)
    {
        flag = 0;

        for(f=2; f<=n/2; f++)
        {
            if(n%f==0)
            {
                flag = 1;
                break;
            }
        }

        if(flag==0)
            printf("\t %d",n);
    }


    return 0;
}
