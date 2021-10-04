
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, a[20], i, choice;
    char ch;

    printf("\nEnter the total number of element: ");
    scanf("%d", &n);

    printf("\nEnter the array elements \n");

    scanf_array(a, n);

    do
    {
        printf("\n\nSelect sorting method \n1. Bubble sort \n2. Selection sort \n3. Insertion sort \n\nEneter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: printf("\n\tBubble sort \n");
                    bubblesort(a, n);
                    break;

            case 2: printf("\n\tSelection sort \n");
                    selectionsort(a, n);
                    break;

            case 3: printf("\n\tInsertion sort \n");
                    insertionsort(a, n);
                    break;

            default: break;
        }

         printf_array(a, n);



    }while(1);


    return 0;
}










int scanf_array(int a[], int n)
{
    int i;

    for(i=0; i<n; i++)
    {
       printf("\na[%d]: ", i);
       scanf("%d", &a[i]);
    }
}



int printf_array(int a[], int n)
{
    int i;

    for(i=0; i<n; i++)
    {
        printf("\t");
        printf(" %d ", a[i]);
    }
    printf("\n");
}



int bubblesort(int a[], int n)
{
    int repeat, i, j;

    for(repeat=0; repeat<n-1; repeat++)
    {
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(a[i] > a[j])
                {
                    a[i] = a[i] + a[j];
                    a[j] = a[i] - a[j];
                    a[i] = a[i] - a[j];
                }
            }
        }
    }
}


int selectionsort(int a[], int n)
{
    int i, j;

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i] > a[j])
            {
                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
        }
    }
}


int insertionsort(int a[], int n)
{
    int i, temp, j;

    for(i=0; i<n; i++)
    {
        temp = a[i];
        j=i-1;

        while(j>=0 && a[j] > temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
}
