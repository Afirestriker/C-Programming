
#include<stdio.h>
#include<conio.h>

 int main()
 {
     int a[20], b[20], n, i;

     printf("\nEnter the range of array: ");
     scanf("%d", &n);

     printf("Enter the array element: \n");

     for(i=0; i<n; i++)
     {
         printf("\n a[%d]: ", i);
         scanf("%d", &a[i]);
     }

     printf("\nAdding the value in another array: \n");

     for(i=0; i<n; i++)
     {
         b[i] = a[i];

         printf("\n b[%d]: %d", i, b[i]);
         printf("\n");
     }


     return 0;
 }
