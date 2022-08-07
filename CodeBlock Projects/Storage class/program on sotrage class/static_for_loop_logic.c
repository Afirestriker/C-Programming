
#include <stdio.h>
#include <conio.h>

int main()
{

    for( fun(); fun(); fun() )
        printf("%d ", fun());


    return 0;
}

int fun()
{
    static int n = 13;
    return n--;
}
