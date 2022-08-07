
#include <stdio.h>
#include <conio.h>

int main()
{
    int i;

    printf("Infinite Loop \n");

    /*while(i=1)
    {
        printf("%d\n",i);
    }*/


    for(i=1; ; )
    {
        printf("%d\n", i);
    }


    return 0;
}
