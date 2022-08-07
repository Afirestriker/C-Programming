
#include <stdio.h>

void pattern1(int *);   // function prototype
void pattern2(int *);
void pattern3(int *);
void pattern4(int *);
void pattern5(int *);
void pattern6(int *);

int r, c, s;    // r=row, c=column, s=space

int main()
{
    int rows;

    printf("\nEnter number of rows: ");
    scanf("%d", &rows);

    pattern1(&rows);   // function call
    pattern2(&rows);
    pattern3(&rows);
    pattern4(&rows);
    pattern5(&rows);
    pattern6(&rows);

    return 0;
}

// function definition
void pattern1(int *n)
{

    printf("\npattern 1 \n");
    for(r=0; r<*n; r++)
    {
        //printf(" ");
        for(c=0; c<=r; c++)
            printf("*");

        printf("\n");
    }
}

void pattern2(int *n)
{
    printf("\npattern 2 \n");

    for(r=0; r<*n; r++)
    {
        for(c=*n; c>r; c--)
            printf("*");

        printf("\n");
    }
}

void pattern3(int *n)
{
    printf("\npattern 3: giving space between starts (* *) will output \"pyramid\" shape \n");

    for(r=0; r<*n; r++)
    {
        for(s=*n; s>r; s--)
            printf(" ");

        for(c=0; c<=r; c++)
            printf("*");    // hint: printf("* ");

        printf("\n");
    }

    printf("\npattern 3: with space between starts (* *) \n");

    for(r=0; r<*n; r++)
    {
        for(s=*n; s>r; s--)
            printf(" ");

        for(c=0; c<=r; c++)
            printf("* ");    // hint: printf("* ");

        printf("\n");
    }
}


void pattern4(int *n)
{
    printf("\npattern 4: giving space between *_* will output \"pyramid\" shape \n");

    for(r=0; r<*n; r++)
    {
        for(s=0; s<=r; s++)
            printf(" ");

        for(c=*n; c>r; c--)
            printf("*");    // hint: printf("* ");

        printf("\n");
    }
}

void pattern5(int *n)
{
    printf("\npattern 5: \"pyramid\" without space (advanced) \n");

    // upper area of pyramid
    for(r=0; r<*n; r++)
    {
        for(s=*n; s>r; s--)
            printf(" ");

        for(c=0; c<=r; c++)
            printf("*");

        if(r != 0)
        {
            for(c=1; c<=r; c++)
                printf("*");
        }

        printf("\n");
    }

    // lower area of pyramid
    for(r=1; r<*n; r++)
    {
        for(s=0; s<=r; s++)
            printf(" ");

        for(c=*n; c>r; c--)
            printf("*");

        if(r != *n-1)
        {
            for(c=*n-1; c>r; c--)
                printf("*");
        }

        printf("\n");
    }
}

void pattern6(int *n)
{
    printf("\npattern 6 \n");

    // upper area of pyramid
    for(r=0; r<*n; r++)
    {
        for(s=0; s<=r; s++)
            printf(" ");

        for(c=*n; c>r; c--)
            printf("*");

        if(r != 5)
        {
            for(c=*n-1; c>r; c--)
                printf("*");
        }

        printf("\n");
    }

    // lower area of pyramid
    for(r=1; r<*n; r++)
    {
        for(s=*n; s>r; s--)
            printf(" ");

        for(c=0; c<=r; c++)
            printf("*");

        if(r != 0)
        {
            for(c=0; c<=r-1; c++)
                printf("*");
        }

        printf("\n");
    }
}


