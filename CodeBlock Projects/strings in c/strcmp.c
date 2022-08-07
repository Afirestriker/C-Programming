
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10] = "He",  str2[4] = "Hi";
    int l;

    l = strcmp(str1, str2); //strcmp() give result in int as >0, <0, or =0;

    /*if =0 mean, str1 == str2;
      if >0 mean, str1 is greater than str2
      if <0 mean, str1 is less than str2;*/

    if(l == 0)
        printf("\nStr1 is equal to str2 \n");
    else if(l > 0)
        printf("\nstr1 is greater than str2 \n");
    else if(l < 0)
        printf("\nstr1 is less than str2 \n\n");

    return 0;
}
