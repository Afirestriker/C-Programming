
#include <stdio.h>
#include <string.h>

int main()
{
    char src[10], dest[10];

    printf("\nEnter name: ");
    scanf("%s", src);

    strcpy(dest, src);

    printf("\nDisplaying string \n");
    printf("\ndest string: %s \n\n", dest);

    return 0;
}
