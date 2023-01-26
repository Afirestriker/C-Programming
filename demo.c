#include <stdio.h>
#include <stdlib.h>

void menu(int *);
void accept(int *, int *);
void output(int *, int);
void bubble_sort(int *, int);
void selection_sort(int *, int);
void insertion_sort(int *, int);

int *arr, n, choice, i, j;
int k=0;


int main()
{
    if(k = 0)
    {
        accept(arr, &n);
        k++;
    }

    menu(&choice);

    switch(choice)
    {
        case 1: printf("\nEnter the number of element to stored: ");
                scanf("%d", &n);

                arr = (int *)malloc(n * sizeof(int));
                if(arr == NULL)
                {
                    printf("\nMemory not available \n");
                    exit(0);
                }
                printf("\nSize of arr: %d \n\n", sizeof(arr));
                accept(arr, &n);
                break;

        case 2: printf("\ndisplaying array element: ");
                output(arr, n);
                break;

        case 3: bubble_sort(arr, n);
                break;

        case 4: selection_sort(arr, n);
                break;

        case 5: insertion_sort(arr, n);
                break;

        case 6: exit(0);
                break;
    }

    return 0;
}

void menu(int *ch)
{
    printf("\n1. Enter new array");
    printf("\n2. Display array");
    printf("\n3. Bubble sort");
    printf("\n4. Selection sort");
    printf("\n5. Insertion sort");
    printf("\n6. Exit");

    printf("\nEnter the choice: ");
    scanf("%d", &*ch);
}

void accept(int ar[], int *l)
{
    printf("\nEnter array element: ");
    for(i=0; i<*l; i++)
        scanf("%d", &ar[i]);

    printf("\n\n");

    main();
}

void output(int ar[], int l)
{
    for(i=0; i<l; i++)
        printf(" %d, ", ar[i]);

    printf("\n\n");
    main();
}

void bubble_sort(int ar[], int l)
{
    for(k=0; k<=l; k++)
    {
        for(i=0; i<l; i++)
        {
            j=i+1;

            if(ar[i] > ar[j] && j < l)
            {   ar[i] = ar[i] + ar[j];
                ar[j] = ar[i] - ar[j];
                ar[i] = ar[i] - ar[j];
            }
        }
    }

    printf("\nBubble sort: ");
    output(ar, l);
}

void selection_sort(int ar[], int l)
{
    for(i=0; i<l-1; i++)
        for(j=i+1; ar[i] > ar[j] && j<l; j++)
        {
            ar[i] = ar[i] + ar[j];
            ar[j] = ar[i] - ar[j];
            ar[i] = ar[i] - ar[j];
        }

    printf("\n\nSelection sort: ");
    output(ar, l);
}

void insertion_sort(int ar[], int l)
{
    int key;
    for(i=1; i<l; i++)
    {
        key = ar[i];

        for(j=i-1; ar[j] > key && j >= 0; j--)
            ar[j+1] = ar[j];

        ar[j+1] = key;
    }

    printf("\n\nInsertion sort: ");
    output(ar, l);
}
