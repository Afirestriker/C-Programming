
#include <stdio.h>
#include <stdlib.h>

void menu(int *);
void accept(int *, int);
void display(int *, int);
void bubble_sort(int *, int);
void selection_sort(int *, int);
void insertion_sort(int *, int);

int *ptr_arr, n, choice, i, j, k;

int main()
{
    menu(&choice);

    switch(choice)
    {
        case 1: printf("\nEnter number of element to stored: ");
                scanf("%d", &n);
                ptr_arr = (int *)malloc(n * sizeof(int));

                if(ptr_arr == NULL)
                {
                    printf("\nMemory not allocated...");
                    main();
                }

                accept(ptr_arr, n);
                main();
                break;

        case 2: printf("\nDisplaying array element: ");
                display(ptr_arr, n);
                break;

        case 3: bubble_sort(ptr_arr, n);
                break;

        case 4: selection_sort(ptr_arr, n);
                break;

        case 5: insertion_sort(ptr_arr, n);
                break;

        case 6: exit(0);
                break;
    }

    main();

    return 0;
}


void menu(int *ch)
{
    printf("\n\n1. Enter new array");
    printf("\n2. Display array");
    printf("\n3. Bubble sort");
    printf("\n4. Selection sort");
    printf("\n5. Insertion sort");
    printf("\n6. Exit");
    printf("\n\nSelect the choice: ");
    scanf("%d", &*ch);
}

void accept(int arr[], int l)
{
    printf("\nEnter array element: ");
    for(i=0; i<l; i++)
        scanf("%d", &arr[i]);

    main();
}

void display(int arr[], int l)
{
    for(i=0; i<l; i++)
        printf(" %d, ", arr[i]);

    main();
}


void bubble_sort(int arr[], int l)
{
    for(k=0; k<l; k++)
    {
        for(i=0; i<l; i++)
        {
            j = i+1;

            if(arr[i] > arr[j] && j < l)
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }

    printf("\nBubble sort: ");
    display(arr, l);
}


void selection_sort(int arr[], int l)
{
    for(i=0; i<l-1; i++)
        for(j=i+1; j<l; j++)
        {
            if(arr[i] > arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }

    printf("\nSelection sort: ");
    display(arr, l);
}


void insertion_sort(int arr[], int l)
{
    int key;

    for(i=1; i<l; i++)
    {
        key = arr[i];

        for(j=i-1; arr[j] > key && j >= 0; j--)
            arr[j+1] = arr[j];

        arr[j+1] = key;
    }

    printf("\nInsertion sort: ");
    display(arr, l);
}
