
#include <stdio.h>
#include <conio.h>

int main()
{
    int name[20], age, result;

    printf("Enter person name: ");
    scanf("%[^\n]", &name);

    printf("\nnEnter person age: ");
    scanf("%d", &age);

    result = age<18? printf("\nPerson %s is not eligible to vote \n", name): printf("\nPerson %s is eligible to vote \n", name);

    printf(" ", result);

    return 0;
}

/*OUTPUT
Enter person name: firstname lastname

nEnter person age: 18

Person firstname lastname is eligible to vote

Process returned 0 (0x0)   execution time : 24.817 s
Press any key to continue.
*/
