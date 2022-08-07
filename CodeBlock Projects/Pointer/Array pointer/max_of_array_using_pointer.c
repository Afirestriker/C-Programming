
///finding the maximum of array using pointer

#include <stdio.h>

void accept(int *, int);
void output(int *, int);
int maximum_element(int *, int);

int main()
{
    int arr[20], n, *ptr_arr = arr, i, max;

    printf("\nEnter the range of array: ");
    scanf("%d", &n);

    accept(arr, n);
    output(arr, n);

    ///finding maximum element using function
    ///max = maximum_element(arr, n);

    max = *ptr_arr;             ///max = ptr_arr[0];
    for(i=0; i<n; i++)
    {
        if(max <  ptr_arr[i])   /// *ptr_arr
            max = ptr_arr[i];   /// *ptr_arr
                                /// ptr_arr++;  //with *ptr_arr to increment the location
    }

    printf("\n\nMaximum of array: %d ", max);

    printf("\n");
    return 0;
}

void accept(int ary[], int length)
{
    int i;

    printf("\nEnter the array elements: ");
    for(i=0; i<length; i++)
    {
        scanf("%d", &ary[i]);   ///same as &*(ary + i)
    }
}

void output (int ary[], int length)
{
    int i;

    printf("\nDisplaying the array elements: ");
    for(i=0; i<length; i++)
    {
        printf("%d, ", ary[i]);   ///same as *(ary + i)
    }
}

int maximum_element(int ary[], int length)
{
    int i, maxi;

    maxi = ary[0];

    for(i=0; i<length; i++)
    {
        if(maxi < ary[i])
            maxi = ary[i];
    }
    return maxi;
}


/*OUTPUT

Enter the range of array: 4

Enter the array elements: 1 8 6 2

Displaying the array elements: 1, 8, 6, 2,

Maximum of array: 8

Process returned 0 (0x0)   execution time : 2.953 s
Press any key to continue.
.
*/
