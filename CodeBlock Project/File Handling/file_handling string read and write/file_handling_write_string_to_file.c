
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char name[50];
    FILE *pwf;

    pwf = fopen("string.txt", "w");

    if(pwf == NULL)
    {
        printf("\nFile opening not successful \n");
        exit(1);
    }

    printf("\nEnter name: ");
    gets(name);
    /* OR, scanf("%[^\n]s", name); */

    fputs(name, pwf);
    /* fprintf(pwf, "%s", name); */

    fclose(pwf);

    getch();
    return 0;
}
