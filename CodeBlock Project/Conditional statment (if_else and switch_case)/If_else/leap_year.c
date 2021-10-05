
#include <stdio.h>
#include <conio.h>

int main()
{
    int year;

    printf("Enter the year value: ");

    scanf("%d", &year);

    if (year%2 == 0 && year%100 != 0 || year%400 == 0)
        printf("Leap year");
    else
        printf("Not a leap year");

    return 0;
}
