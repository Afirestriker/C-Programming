
#include <stdio.h>
#include <conio.h>

int main()
{
    int r;
    float pie = 3.14, area;

    printf("Enter the Radius value of circle: ");
    scanf("%d", &r);

    printf("\nArea of circle for given radius %d \n", r);

    area = pie * (r*r);

    printf("\nArea of circle : %f \n", area);


    return 0;
}
