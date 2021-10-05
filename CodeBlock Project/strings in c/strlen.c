
#include <stdio.h>
#include <string.h> //must include while using any string function.

int main()
{
    char str[10];
    int length;

    printf("\nEnter name: ");
    scanf("%s", str);

    //using strlen() function to calculate length of string str. must include string.h header file
    length = strlen(str);

    //note: strlen() give result in integer
    printf("\nString length: %d \n\n", length);

    return 0;
}
