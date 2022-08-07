
#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 4;
    auto int j = 2;

    printf("\nBoth \nint i; and auto int j; \n means the same \n\n*since auto is default storage class specifier to c it-is automatically \nassign to int i; \n\n");

    printf("int i: %d \n\n", i);

    printf("auto int j: %d \n", j);

    return 0;
}

