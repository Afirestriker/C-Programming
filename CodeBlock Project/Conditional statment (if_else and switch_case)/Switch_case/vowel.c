
#include <stdio.h>
#include <conio.h>

int main()
{
    char vowel;

    printf("Enter the alphabet: ");

    scanf("%c", &vowel);

    switch(vowel)
    {
        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
                 printf("Vowel");
                 break;

        default: printf("Not a vowel");
                 break;
    }

    return 0;
}
