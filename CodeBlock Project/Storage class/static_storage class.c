
#include <stdio.h>
#include <conio.h>

int main()
{
    static int i = 2;
    //i++;
    //printf("static int: %d \n", i);

    for(i=0; i<4; i++)
    {
        static int j = 2;
        int k = 4;

        j++;
        k++;

        printf("static j: %d \n", j);
        printf("int k: %d \n\n", k);

    }



    return 0;
}
