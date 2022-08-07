
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char name[50];
    FILE *pwbf;
    //clrscr();

    pwbf = fopen("binary_file.exe", "wb");
    if(pwbf == NULL)
    {
        printf("\nFile opening not successful \n");
        exit(1);
    }

    printf("\nEnter name: ");
    gets(name);

    fprintf(pwbf, "%s", name);

    fclose(pwbf);

    getch();
    return 0;
}
