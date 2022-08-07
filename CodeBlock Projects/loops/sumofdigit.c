
//date 29-11-2019
#include <stdio.h>
#include <conio.h>

int main()
{
    int num, nn, sum = 0, digit;

    printf("Enter the number: ");
    scanf("%d", &num);

    nn = num;

    while (num>0)
        {
            digit = num % 10;

            sum = sum + digit;

            num = num / 10;
        }

        printf("\nsum of digit of number %d is: %d\n",nn,sum);

    return 0;
}
