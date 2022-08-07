
#include <stdio.h>
#include <conio.h>

int main()
{
    char name[20];

    printf("\nEnter name with white-space: ");
    scanf("%[^\n]", name);

    printf("\n\nThe name is: %s \n\n", name);

    return 0;
}
