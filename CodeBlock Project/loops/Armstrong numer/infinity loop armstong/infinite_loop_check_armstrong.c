
//date created 3-12-2019
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, d, s=0, t;

    printf("Check if the enter number is Armstrong number \n\n");

    while(1)
    {
        printf("\nEnter the number: ");
        scanf("%d", &n);

        if(n==0)
        {
            printf("\n\nValidating Programmne \n");
            break;
        }

        t = n;
        s = 0;

        if(n > 99 && n < 1000)
        {
            //printf("number is greater than 99 \n");
            while(t>0)   //inner while
            {
                d = t%10;
                s += d*d*d;
                t /= 10;
            }//inner while condition end

            if(s==n)
            {
                printf("The number is Armstrong Number \n Enter 0 to exit \n");
            }
            else
                printf("Not a Armstrong Number \n Enter 0 to exit \n");
        }

        if(n > 999 && n < 10000)
        {
            //printf("number is greater than 999 \n");
            while(t>0)   //inner while
            {
                d = t%10;
                s += d*d*d*d;
                t /= 10;
            }//inner while condition end

            if(s==n)
            {
                printf("The number is Armstrong Number \n Enter 0 to exit \n");
            }
            else
                printf("Not a Armstrong Number \n Enter 0 to exit \n");
        }

        if(n > 9999 && n < 100000)
        {
            //printf("number is greater than 9999 \n");
            while(t>0)   //inner while
            {
                d = t%10;
                s += d*d*d*d*d;
                t /= 10;
            }//inner while condition end

            if(s==n)
            {
                printf("The number is Armstrong Number \n Enter 0 to exit \n");
            }
            else
                printf("Not a Armstrong Number \n Enter 0 to exit \n");
        }




    }//outer while condition end

    printf("Bye..Bye...\n");

    return 0;
}
