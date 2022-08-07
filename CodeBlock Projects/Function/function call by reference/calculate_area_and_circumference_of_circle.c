
///function to calculate area and circumference of a circle and print the result from main()

#include <stdio.h>
#define PIE 3.14

void calculate(int, float *, float *);

int main()
{
    int r;
    float area, circumference;

    printf("\nEnter radius: ");
    scanf("%d", &r);

    calculate(r, &area, &circumference);

    printf("\nArea of circle: %f \n", area);

    printf("\ncircumference of circle: %f \n", circumference);

    printf("\n");
    return 0;
}

void calculate(int radius, float *carea, float *ccircum)
{
    *carea = PIE * (radius * radius);

    *ccircum = (2 * PIE) * radius;
}

/*OUTPUT

Enter radius: 6

Area of circle: 113.040001

circumference of circle: 37.680000

Process returned 0 (0x0)   execution time : 0.531 s
Press any key to continue.
*/
