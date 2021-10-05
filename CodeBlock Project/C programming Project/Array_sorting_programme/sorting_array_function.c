
/*
author: Ashish Agrawal
name of program: Sorting of array using multiple method
date: 19/02/2020
*/
#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

void scan(int *, int *);
void print(int *, int);
void menu(int *);
void bubble_sort(int *, int);
void selection_sort(int *, int);
void insertion_sort(int *, int);

int array[20], num; //since variable are used globally in various function
int i=0;

int main()
{
    int choice;

    while(i==0)
    {
        printf("\n  Welcome to the program: Arranging the numbers in ascending order \n\n  Enter the array to begin: \n\n");
        i++;
        scan(array, &num);
    }

    menu(&choice);

    switch (choice)
    {
        case 1: scan(array, &num);
                break;

        case 2: bubble_sort(array, num);
                break;

        case 3: selection_sort(array, num);
                break;

        case 4: insertion_sort(array, num);
                break;

        case 5: printf("\nTerminating...programme...\n\n");
                exit(0);
                break;

        //case 6: print(array, num);

        default: break;
    }

    return 0;
}



void menu(int *choice)
{
    printf("\nEnter the array element (option: 1) before selecting the sorting method.\n\n");
    printf("\t1.Enter new array \n");
    printf("\t2.Bubble sort \n");
    printf("\t3.Selection sort \n");
    printf("\t4.Insertion sort \n");
    printf("\t5.Exit \n");
    //printf("\t6.print array \n");
    printf("\n\n\tEnter the choice: ");
    scanf("%d", &*choice);
}


void scan(int a[], int *num)
{
    int i;

    printf("\nEnter the array length: ");
    scanf("%d", &*num);

    printf("\n\nEnter the array elements: ");

    for(i=0; i<*num; i++)
        scanf("%d", &a[i]);

    printf("\n");

    main();

}


void print(int a[], int num)
{
    int i;

    for(i=0; i<num; i++)
        printf(" %d ", a[i]);

    printf("\n\n");

    main();

}


void bubble_sort(int a[], int num)
{
    int repeat, i, j;

    for(repeat=0; repeat<=num; repeat++)
    {
        for(i=0; i<=num; i++)
        {
            j = i+1;

            if(a[i] > a[j] && j < num)
            {
                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
        }
    }


    printf("\n\nSorted array using bubble sort method:  ");
    print(a, num); //function call to print();

    printf("\n\n");

    //main();

}


void selection_sort(int a[], int num)
{
    int i, j;

    for(i=0; i<num; i++)
    {
        for(j=i+1; j<num; j++)
        {
            if(a[i] > a[j])
            {
                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
        }
    }


    printf("\n\nSorted array using method Selection sort: ");
    print(a, num); //function call to print();

    printf("\n\n");

    //main();
}


void insertion_sort(int a[], int num)
{
    int i = 0, j, temp;

    for(i=i+1; i<num; i++)
    {
        temp = a[i];
        j = i-1;

        while(j >= 0 && a[j] > temp)
        {
            a[j+1] = a[j];
            j--;
        }

        a[j+1] = temp;
    }

    printf("\nSorted array using insertion sort method: ");
    print(a, num);

    printf("\n\n");

    //main();
}


