
///accepting and displaying the elements of array using function call

/*date 23-12-2019*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i;

    printf("\nEnter the range of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the element of array: \n");

    accept_array(n, i);

    printf("\nArray elements: \n");

    print_array(n, i);


    return 0;
}


void accept_array(int n, int i)
{
    int a[n];

    for(i=0; i<n; i++)
    {
        printf("\na[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void print_array(int n, int i)
{
    int a[n];

    for(i=0; i<n; i++)
    {
        printf("\n a[%d]: %d", i, a[i]);
        printf("\n");
    }
}
