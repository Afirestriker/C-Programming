
//date 23-12-2019
#include <stdio.h>
#include <conio.h>

int main()
{
    int *p, n;

    printf("Address of n: %d \n\n\n", &n);

    printf("Enter the number to print using pointer: ");
    scanf("%d", &n);

    p = &n;

    printf("After assigning of p = &n \n\n\n");
    printf("value of n  = %d \n\n", n);
    printf("Pointer *p  = %d \n", *p);
    printf("Address &*p = %d \n", &*p);
    printf("Address &p  = %d \n", &p);

    printf("\nEnter value for pointer: ");
    // before assigning value through pointer. the pointer variable must point to some address to store the value.
    scanf("%d", p);
    // & is not required as p is pointer to &n

    printf("\nValue of p:     %d", *p);
    printf("\nvalue of n:     %d \n", n);  //value of n also get change since p points to n location
    printf("\nAddress of &*p: %d \n", &*p);

    return 0;
}
