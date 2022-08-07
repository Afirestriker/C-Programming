
#include <stdio.h>
#include <string.h> //use while working with string in c. Not required for this program.
                    //use only when working with string function.

int main()
{
    //string character constant
    char str1[] = {'H','e','l','l','o','\0'};
    char str2[8] = {'S', 't', 'r', 'i', 'n', 'g', '2', '\0'};

    //string constant
    char str3[] = "Hello";
    char str4[10] = "String2";

    printf("\nstr1: %s \n", str1);
    printf("\nstr2: %s \n", str2);
    printf("\nstr3: %s \n", str3);
    printf("\nstr4: %s \n", str4);

    printf("\n");
    return 0;
}
