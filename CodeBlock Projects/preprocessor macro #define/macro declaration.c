
#include <stdio.h>
#include <conio.h>

#define SIZE 1
#define sq(x) x*x
#define SQ(x) (x)*(x)

int main()
{
    int y = 2;

    printf("size: %d \n\n", SIZE);

    printf("square(2): %d \n\n", sq(2));

    printf("Square(y-2) x*x: %d \n\n", sq(y-2));

    printf("Square(y-2) (x)*(x): %d \n\n", SQ(y-2));


    return 0;
}
