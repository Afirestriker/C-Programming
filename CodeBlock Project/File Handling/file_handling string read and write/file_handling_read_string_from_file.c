
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char name[50];
    FILE *prf;

    prf = fopen("string.txt", "r");

    if(prf == NULL)
    {
        printf("\nFile opening not successful \n");
        exit(1);
    }

    printf("\nName from file: ");

    while(1)
    {
        if(fgets(name, 50, prf) != NULL)
        {
          printf("%s", name);
        }
        else
        {
            break;
        }
    }

    printf("\n");
    fclose(prf);

    getch();
    return 0;
}
