
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char n;
    FILE *pwf, *prf;


    prf = fopen("Binary_file.exe", "rb");
    if(prf == NULL)
    {
        printf("\nOutput File opening not successful \n");
        exit(1);
    }

    pwf = fopen("Binary_file1.exe", "wb");
    if(pwf == NULL)
    {
        printf("\nInput File opening not successful \n");
        exit(1);
    }


    //printf("\nName from file: ");
    while(1)
    {
        n = fgetc(prf);
        if(n != EOF)
        {
            fputc(n, pwf);
            printf("%c", n);
        }
        else
            break;
    }

    fclose(pwf);
    fclose(prf);

    getch();
    return 0;
}
