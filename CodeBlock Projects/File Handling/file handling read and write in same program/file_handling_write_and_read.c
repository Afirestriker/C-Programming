
/*Write a programme  to Read, Write file in the same programme*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int num, n;
    FILE *write_read;
    //clrscr();

    //open file in write mode
    write_read = fopen("write_read.txt", "w");

    if(write_read == NULL)
    {
        printf("\nFile open not successful \n");
        exit(1);
    }

    printf("\nEnter number: ");
    scanf("%d", &num);

    //data entered in file
    fprintf(write_read, "%d", num);

    //close file opened in write mode
    fclose(write_read);

    //open file in read mode
    write_read = fopen("write_read.txt", "r");

    if(write_read == NULL)
    {
        printf("\nFile Re-open not successful \n");
        exit(1);
    }

    //data collected from file
    fscanf(write_read, "%d", &n);

    printf("\nNumber from file: %d \n", n);

    //close file opened in read mode
    fclose(write_read);

    getch();
    return 0;
}
