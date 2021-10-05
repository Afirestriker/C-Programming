
#include <stdio.h>
#include <conio.h>

void pattern1();
void pattern2();
void pattern3();
void pattern4();
void pattern5();
void pattern6();

int main()
{
    pattern1();

    pattern2();

    pattern3();

    pattern4();

    pattern5();

    pattern6();

    return 0;
}








void pattern1()
{
    int r, c, space;

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

}




void pattern2()
{
    int r, c, space;

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

}




void pattern3()
{
    int r, c, space;

    printf("\nNew pattern \n\n");

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

}


void pattern4()
{
    int r, c, space;

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
}


void pattern5()
{
    int r, c, space;

    printf("\nNew pattern \n\n");

    for(r=1; r<=5; r++)
    {
        for(c=1; c<=r; c++)
        {
            printf("*");
        }
        for(space=4; space>=r; space--)
            printf(" ");

        for(space=4; space>=r; space--)
            printf(" ");

        for(c=1; c<=r; c++)
            printf("*");

        printf("\n");
    }

}


void pattern6()
{
    int r, c, space;

    printf("\nNew pattern (middle line * count are 9) \n\n");

    for(r=1; r<=4; r++)
    {
        for(c=1; c<=r; c++)
            printf("*");

        for(space=4; space>=r; space--)
            printf(" ");

        for(space=3; space>=r; space--)
            printf(" ");

        for(c=1; c<=r; c++)
            printf("*");

        printf("\n");
    }

    for(r=1; r<=9; r++)
        printf("*");
        printf("\n");

    for(r=1; r<=4; r++)
    {
        for(c=4; c>=r; c--)
            printf("*");

        for(space=1; space<=r; space++)
            printf(" ");

        for(space=2; space<=r; space++)
            printf(" ");

        for(c=4; c>=r; c--)
            printf("*");

        printf("\n");
    }
}
