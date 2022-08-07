//Swapping of number without third variable

#include <stdio.h>
#include <conio.h>

void main()
{
    //system("cls");

    int a, b;

    printf("Enter num1: ");
    scanf("%d",&a);

    printf("Enter num2: ");
    scanf("%d",&b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("\nNumber swap:\n");
    printf("\nnum1: %d",a);
    printf("\nnum2: %d \n",b);

    return 0;

}

/*OUTPUT
Enter num1: 2
Enter num2: 4

Number swap:

num1: 4
num2: 2

Process returned 10 (0xA)   execution time : 1.031 s
Press any key to continue.
*/
