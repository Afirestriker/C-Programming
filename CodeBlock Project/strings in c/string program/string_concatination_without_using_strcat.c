
#include <stdio.h>

int main()
{
    char name1[20], name2[20], name3[40];
    int i=0, j=0;

    printf("\nEnter name1: ");
    scanf("%s", name1);

    printf("\nEnter name2: ");
    scanf("%s", name2);

    while(name1[i] != '\0')
    {
        name3[j] = name1[i];
        j++; i++;
    }

    i=0;

    while(name2[i] != '\0')
    {
        name3[j] = name2[i];
        j++; i++;
    }

    name3[j] = '\0';

    printf("\nString concatenate result \n");
    printf("\nName3 = %s \n", name3);

    return 0;
}
