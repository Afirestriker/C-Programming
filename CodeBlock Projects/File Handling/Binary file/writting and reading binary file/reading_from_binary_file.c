
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char name[50];
    FILE *prbf;
    //clrscr();

    prbf = fopen("binary_file.exe", "rb");
    if(prbf == NULL)
    {
        printf("\nFile opening not successful \n");
        exit(1);
    }

    printf("\nName from file: ");
    while(1)
    {
        if(fgets(name, 10, prbf) != NULL)
            printf("%s", name);
        else
            break;
    }

    fclose(prbf);

    getch();
    return 0;
}
