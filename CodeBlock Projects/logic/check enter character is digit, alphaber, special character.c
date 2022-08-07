
//date 20-12-2019
#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;

    printf("Enter the character: ");
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        printf("\nEnter character %c is Alphabet \n", ch);
    }

    else if(ch >= '0' && ch <= '9')
    {
        printf("\nEnter character %c is digit \n", ch);
    }

    else
    {
        printf("\nEnter character %c is special character \n", ch);
    }


    return 0;
}
