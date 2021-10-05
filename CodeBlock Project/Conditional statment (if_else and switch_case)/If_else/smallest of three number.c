
// To find the smallest of three number
#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c;

    printf("Enter num1, num2, num3 \n");
    scanf("%d%d%d", &a, &b, &c);

    if(a<b && a<c)
    {
        printf("\nSmallest number %d \n", a);
    }
    else if(b<c)
    {
        printf("\nSamllest number %d \n", b);
    }
    else
    {
        printf("\nSmallest number %d \n", c);
    }


    return 0;
}
