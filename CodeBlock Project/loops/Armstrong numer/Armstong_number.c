
#include <stdio.h>
#include <conio.h>

int main ()
{
    int n, d, s = 0, t;

    printf("Enter the number: ");
    scanf("%d",&n);

    t = n;
   if(n > 99 && n < 1000)
   {
       //printf("number is greater than 99 \n");
        while(t>0)
        {
            d = t%10;

            s = s + d * d * d;

            t = t/10;
        }

        if(s==n)
            printf("\n\tArmstrong number\n");
        else
            printf("\n\tNot a Armstrong number\n");
   }

   else if(n > 999 && n < 10000)
   {
       //printf("number is greater than 999 \n");
        while(t>0)
        {
            d = t%10;

            s = s + d * d * d * d;

            t = t/10;
        }

        if(s==n)
            printf("\n\tArmstrong number\n");
        else
            printf("\n\tNot a Armstrong number\n");
   }


   else if(n > 9999 && n < 100000)
    {
        //printf("number is greater than 9999 \n");
        while(t>0)
        {
            d = t%10;

            s = s + d * d * d * d * d;

            t = t/10;
        }

        if(s==n)
            printf("\n\tArmstrong number\n");
        else
            printf("\n\tNot a Armstrong number\n");
    }
    return 0;
}
