
//date 22-11-2019
#include <stdio.h>
#include <conio.h>

int main()
{
    int r, c, space;

    for(r=1; r<=5; r++)
    {
        for(c=1; c<=r; c++)
        {
            printf("* ");
        }
        printf("\n");
    }

   printf("\n\n New pattern\n\n");

   for (r=1; r<=5; r++)
    {
        for(c=5; c>=r; c--)
        {
            printf("* ");
        }
        printf("\n");
    }


    printf("\n\n New pattern\n\n");

    for(r=1; r<=5; r++)
    {

        for(space=5; space>=r; space--)
        {
            printf(" ");
        }

         for(c=1; c<=r; c++)
         {
             printf("*");

         }

         printf("\n");

    }


    printf("\n\n New pattern\n");

    printf("HINT: adding space between this up and down pattern of start's \n\t will print another design of pattern\n");

    printf("\nSee file PYRAMID_PATTERN.C \n\n");

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

         printf("\n");

    }


     printf("\n New pattern \n\n");

    for(r=1; r<=5; r++)
    {
        {
            for(c=1; c<=r; c++)
            printf("*");
        }
        printf("\n");
    }

    for(r=1; r<=4; r++)
    {
        for(c=4; c>=r; c--)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");


    printf("\nNew pattern \n\n");

    for(r=1; r<=5; r++)
    {
        for(space=5; space>=r; space--)
            printf(" ");

        for(c=1; c<=r; c++)
            printf("*");

        printf("\n");
    }

    for(r=2; r<=5; r++)
    {
        for(space=1; space<=r; space++)
            printf(" ");

        for(c=5; c>=r; c--)
            printf("*");

        printf("\n");
    }



    return 0;
}
