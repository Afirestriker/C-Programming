
#include <stdio.h>
#include <conio.h>

void arr_function(int *, int);  //first parameter is passing address or array to the function formal parameter

int main()
{
    int array1[] = {10, 20, 30, 40, 50}, array2[] = {100, 200, 300};

    arr_function(array1, 4);   //array1 is the based address of array1 passed to the function (call by reference)

    arr_function(array2, 2);    // 4 and 2 are just simple value which pass to function formal parameter length

    return 0;
}


void arr_function(int a[], int length)
{
    int i;
    printf("\n\nDisplaying array element: \n\n");
    for(i=0; i<length; i++)
    {
        printf("%d  ", a[i]);
    }

    printf("\n\n");
}


/*output



Displaying array element:

10  20  30  40



Displaying array element:

100  200


Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.
*/
