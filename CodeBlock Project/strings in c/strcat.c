
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char str1[10] = "Hi ";
    char str2[10] = "Hello";

    printf("\nstr1: %s \n", str1);
    printf("\nstr2: %s \n", str2);

    //sting joining using strcat() function
    strcat(str1, str2);
    printf("\nstrcat(str1, str2) and displaying str1 = %s \n", str1);


    return 0;
}
