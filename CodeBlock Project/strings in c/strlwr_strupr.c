
#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];

    printf("\nEnter name: ");
    scanf("%s", name);

    strlwr(name);
    printf("\nName in lower case: %s \n", name);

    strupr(name);
    printf("\nName in upper case: %s \n\n", name);


    return 0;
}
