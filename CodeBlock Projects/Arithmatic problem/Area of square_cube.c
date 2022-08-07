
#include <stdio.h>
#include <conio.h>

int main()
{
    int l_sq, l_cube, a_sq, a_cube;

    printf("\nProgram to calculate area of square and cube \n");

    printf("\nEnter the side length of Square: ");
    scanf("%d", &l_sq);

    printf("\nEnter the side length of cube: ");
    scanf("%d", &l_cube);

    a_sq = l_sq * l_sq;

    a_cube = 6 * (l_cube * l_cube);

    printf("\nResult: \n\n");
    printf("Area of square for side length %d is: %d \n\n", l_sq, a_sq);

    printf("Area of cube for side length %d is : %d \n\n", l_cube, a_cube);

    return 0;
}
/*OUTPUT

Program to calculate area of square and cube

Enter the side length of Square: 2

Enter the side length of cube: 2

Result:

Area of square for side length 2 is: 4

Area of cube for side length 2 is : 24


Process returned 0 (0x0)   execution time : 4.453 s
Press any key to continue.
*/
