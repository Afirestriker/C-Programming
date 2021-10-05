
//date 22-11-2019
#include <stdio.h>
#include <conio.h>

int main()
{
    int r, c, space;


    for(r=1; r<=5; r++)
    {

        for(space=5; space>=r; space--)
        {
            printf(" ");
        }

        for(c=1; c<=r; c++)
        {
            printf("* ");
        }

        printf("\n");

    }


    printf("\n\nNew Pattern\n");

    printf("HINT: comment the printf statement and joint the pattern\n\n");

    for(r=2; r<=5; r++)
    {

        for(space=1; space<=r; space++)
        {
            printf(" ");
        }

        for(c=5; c>=r; c--)
        {
            printf("* ");
        }

        printf("\n");

    }


    printf("\nNew pattern (short with logic method) \n\n");
    for(space=5; space>=1; space--)
        printf(" "); //for space close
        printf("*\n");

    for(r=1; r<=4; r++)
    {
        for(space=4; space>=r; space--)
            printf(" "); //space loop close

        for(c=1; c<=r; c++)
            printf("**");

        printf("*\n");
    }

    for(r=2; r<=4; r++)
    {
        for(space=1; space<=r; space++)
            printf(" ");

        for(c=4; c>=r; c--)
            printf("**");

        printf("*\n");
    }

    for(space=5; space>=1; space--)
        printf(" "); //space loop close
        printf("*\n");




    printf("\nNew pattern (long method) \n\n");

    for(space=5; space>=1; space--)
        printf(" ");
        printf("*\n");

    for(r=1; r<=4; r++)
    {
        for(space=4; space>=r; space--)
        {
            printf(" ");
        }
        for(c=1; c<=r; c++)
        {
            printf("**");
        }
        printf("*\n");
    }

    for(r=2; r<=4; r++)
    {
        for(space=1; space<=r; space++)
        {
            printf(" ");
        }
        for(c=4; c>=r; c--)
        {
            printf("**");
        }
        printf("*\n");
    }
    for(space=5; space>=1; space--)
        printf(" ");
        printf("*\n");




    printf("\nNew pattern (short with logic method) \n\n");

    for(r=1; r<=4; r++)
    {
        for(space=1; space<=r; space++)
        {
            printf(" ");
        }
        for(c=4; c>=r; c--)
            printf("**");

        printf("*\n");
    }

    for(space=5; space>=1; space--)
        printf(" ");
        printf("*\n");

    for(r=1; r<=4; r++)
    {
        for(space=4; space>=r; space--)
            printf(" ");

        for(c=1; c<=r; c++)
            printf("**");

        printf("*\n");
    }




    printf("\nNew pattern (long method) \n\n");

    for(r=1; r<=5; r++)
    {
        for(space=1; space<=r; space++)
        {
            printf(" ");
        }
        for(c=5; c>=r; c--)
        {
            printf("*");
        }
        for(c=4; c>=r; c--)
        {
            printf("*");
        }

        printf("\n");
    }
    for(r=1; r<=4; r++)
    {
        for(space=4; space>=r; space--)
        {
            printf(" ");
        }
        for(c=1; c<=r; c++)
        {
            printf("**");
        }
        printf("*\n");
    }


    return 0;
}
