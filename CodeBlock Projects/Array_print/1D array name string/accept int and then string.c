
//  https://www.includehelp.com/c/c-program-to-read-string-with-spaces-using-scanf-function.aspx

#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    char name[20], temp;

    printf("Enter number: ");
    scanf("%d", &n);

    scanf("%c", &temp); //needed refer:  https://www.includehelp.com/c/c-program-to-read-string-with-spaces-using-scanf-function.aspx
   // printf("\n\nInside temp: %c \n\n", temp);

    printf("\nEnter name: ");
    scanf("%[^\n]", &name);

    printf("\nprinting number and name: \n");

    printf("\nNumber: %d \n", n);

    printf("\nName: %s \n", name);


    return 0;
}
