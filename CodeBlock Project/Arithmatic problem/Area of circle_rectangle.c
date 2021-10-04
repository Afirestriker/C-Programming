
#include <stdio.h>
#include <conio.h>

int main()
{
    int r, l, w, a_rectangle;
    float a_circle, pie = 3.14;

    printf("\nProgram to calculate area of circle and rectangle. \n\n");

    printf("Enter the radius of circle: ");
    scanf("%d", &r);

    printf("\nEnter the length and width of rectangle: ");
    scanf("%d%d", &l, &w);

    a_circle = pie * (r * r);

    a_rectangle = l * w;

    printf("\nResult: \n\n");
    printf("Area of circle for radius %d is: %f \n\n", r, a_circle);
    printf("Area of rectangle for given length %d and breadth %d is: %d \n\n", l, w, a_rectangle);

    return 0;
}

/*OUTPUT

Program to calculate area of circle and rectangle.

Enter the radius of circle: 2

Enter the length and width of rectangle: 2 4

Result:

Area of circle for radius 2 is: 12.560000

Area of rectangle for given length 2 and breadth 4 is: 8


Process returned 0 (0x0)   execution time : 1.813 s
Press any key to continue.
*/
