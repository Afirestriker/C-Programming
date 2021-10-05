
#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    int *ptr = arr; /// OR, &arr
    int *ptr2 = ptr;

    printf("\narr[5] = {10, 20, 30, 40, 50}; \n");
    printf("\nPointer address ptr: %d", ptr);
    printf("\nPointer value *ptr:  %d \n", *ptr);

    ptr++;
    printf("\n ptr++");
    printf("\nAddress ptr: %d", ptr);
    printf("\nValue *ptr:  %d \n", *ptr);

    ptr2 = ptr + 1;
    printf("\n\nAddress ptr2 (ptr+1): %d", ptr2);
    printf("\nValue of *ptr2 (ptr+1): %d \n", *ptr2);

    ptr = ptr2 + 2;
    printf("\n\nAddress ptr (ptr2+2): %d", ptr);
    printf("\nvalue *ptr (ptr2+2): %d \n", *ptr);

    int x = ptr - ptr2;
    printf("\nValue of x (ptr - ptr2): %d \n", x);


    int y = *ptr - *ptr2;
    printf("\nValue of y (*ptr - *ptr2): %d \n", y);

    ptr2 = ptr;
    printf("\n\nAfter ptr2=ptr ");
    printf("\nAddress of prt2 and ptr: %d   %d", ptr2, ptr);
    printf("\nValue of *prt2 and *ptr: %d   %d \n", *ptr2, *ptr);

    return 0;
}
