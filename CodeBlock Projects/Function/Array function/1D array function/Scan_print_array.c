
#include <stdio.h>
#include <conio.h>

void scan(int *, int);
void print(int *, int);

int main()
{
    int arr[20], n;

    printf("\nEnter the range of array: ");
    scanf("%d", &n);

    scan(arr, n);

    print(arr, n);

    return 0;
 }

 void scan(int a[], int length)
 {
     int i;
     printf("\nEnter array element of length %d: \n\n", length);
     for(i=0; i<length; i++)
        scanf("%d", &a[i]);
 }

 void print(int a[], int length)
 {
     int i;
     printf("\nDisplaying array element of length %d: \n\n", length);
     for(i=0; i<length; i++)
        printf("%d  ",a[i]);

     printf("\n\n");
 }

 /*output

Enter the range of array: 5

Enter array element of length 5:

10 20 30 40 50

Displaying array element of length 5:

10  20  30  40  50


Process returned 0 (0x0)   execution time : 10.423 s
Press any key to continue.

*/
