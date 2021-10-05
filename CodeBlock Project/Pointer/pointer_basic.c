
#include <stdio.h>

int main()
{
    // A normal integer variable
    int var=6;

    // A pointer variable that holds address of var
    int *ptr;

    printf("\nAddress of var: %d \n", &var);
    printf("\nAddress of *ptr before ptr=&var: %d \n\n", ptr);

    ptr = &var;
    printf("Address of *ptr after ptr=&var: %d \n\n", ptr);

    // This line prints value at address stored in ptr.
    // Value stored is value of variable "var"
    printf("Value of *ptr: %d \n\n", *ptr);

    // We can also use ptr as lvalue (Left hand
    // side of assignment)
    *ptr = 20; // Value at address is now 20

    // This prints 20
    printf("After doing *ptr = 20, *ptr is %d\n", *ptr);
    printf("And var is %d \n", var);

    // we can also assign new value from console to the pointer
    printf("\nEnter new value of *ptr: ");
    scanf("%d", &*ptr);

    printf("\nDisplaying new value of *ptr: %d \n\n", *ptr);
    printf("Value of var: %d", var);

    printf("\n");
    return 0;
}
