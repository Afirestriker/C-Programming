
/*string concatination without using string.h library function
    strcat() function */
#include <stdio.h>

int main()
{
    int i, j;
    char name1[50], name2[20];

    printf("\nEnter name1: ");
    scanf("%s", name1);

    printf("\nEnter name2: ");
    scanf("%s", name2);

    for(i=0; name1[i] != '\0'; i++);

    for(j=0; name2[j] != '\0'; j++, i++)
    {
        name1[i] = name2[j];
    }

    name1[i] = '\0';

    printf("\nString after combining: %s \n\n", name1);

    return 0;
}
