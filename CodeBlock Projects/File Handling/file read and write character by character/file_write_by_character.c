
/*Write a programme to read charter from the file*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char ch;
    FILE *ptr_file;

    //open file in write mode
    ptr_file = fopen("character_file.txt", "w");

    if(ptr_file == NULL)
    {
        printf("\nFile open not successful ERROR! \n");
        exit(1);
    }

    printf("\nEnter name: ");
    while( (ch = getchar()) != '\n' )
    {
        fputc(ch, ptr_file);
    }

    //close file opened in write mode
    fclose(ptr_file);

    getch();
    return 0;
}
