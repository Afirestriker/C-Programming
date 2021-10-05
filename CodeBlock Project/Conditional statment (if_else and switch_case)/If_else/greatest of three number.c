
#include <stdio.h>
#include <conio.h>

int main()
{
    int num1, num2, num3;

//    system("cls");

    printf("Enter three different number: \n");

    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3)
        printf("%d is greater", num1);

    else if (num2 > num3)
        printf("%d is greater", num2);

    else
        printf("%d is greater", num3);


    return 0;
}
