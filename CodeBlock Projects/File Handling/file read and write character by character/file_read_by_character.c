
/*Write a programme to write charter to the file*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char ch;
    FILE *ptr_file;

    //open file in read mode
    ptr_file = fopen("character_file.txt", "r");

    if(ptr_file == NULL)
    {
        printf("\nFile open not successful \n");
        exit(1);
    }

    printf("\nName form file: ");
    while( (ch = fgetc(ptr_file)) != EOF )
    {
        printf("%c", ch);
    }

    printf("\n");
    //close file opened in read mode
    fclose(ptr_file);

    getch();
    return 0;
}
