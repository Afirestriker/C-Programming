
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char str[10] = "Hello";
    int i=0, length=0;

    ///using strlen() function
    printf("\nstrlen() = %d \n", strlen(str));

    ///without using strlen() funciton
    while(str[i] != '\0')
    {
        length++;
        i++;
    }
    printf("\nString length: %d \n", length);

    return 0;
}
