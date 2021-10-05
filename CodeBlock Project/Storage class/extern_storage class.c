
#include <stdio.h>
#include <conio.h>
#include "externfile.c"

int main()
{
    extern i, j; //default type is int
    //i = 2;

    extern float k;

    extern char arr[150];

    printf("extern i default value: %d \n\n", i);

    printf("extern j: %d \n\n", j);

    printf("extern float k: %f \n\n", k);

    printf("This down string is declared in externfile.c and is display using extern_storage_class.c file \n\n");
    printf("%s \n", arr);

    return 0;
}
