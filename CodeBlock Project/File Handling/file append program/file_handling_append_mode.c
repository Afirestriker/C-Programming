
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fapend;
    char name[20];
    int i = 1;

    fapend = fopen("file_append.txt", "a");

    if(fapend == NULL)
    {
        printf("\nFile opening not successful. ERROR! \n");
        exit(1);
    }

    printf("Enter name %d: ", i);
    scanf("%s", name);

    fprintf(fapend, "\nName %d: %s", i, name);
    i++;

    fclose(fapend);

    return 0;
}
