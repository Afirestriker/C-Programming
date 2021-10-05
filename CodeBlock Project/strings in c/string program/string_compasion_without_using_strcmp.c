
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello", str2[] = "Hi";
    int i,compare;

    //using strcmp()
    compare = strcmp(str1, str2);

    if(compare > 0)
        printf("\nstr1 is greater than str2 \n");
    else if(compare < 0)
        printf("\nstr1 is less than str2 \n");
    else
        printf("\nstr1 is equal to str2 \n");


    for(i=0; i<5; i++);
    printf("\n\ti value : %d \n", i);

    ///without using strcmp()
    for(i=0; str1[i] == str2[i] && str1[i] != '\0'; i++);

    if(str1[i] > str2[i])
        printf("\nstr1 is greater than str2 \n");
    else if(str1[i] < str2[i])
        printf("\nstr1 is less than str2 \n");
    else
        printf("\nstr1 is equal to str2 \n");


    getch();
    return 0;
}
