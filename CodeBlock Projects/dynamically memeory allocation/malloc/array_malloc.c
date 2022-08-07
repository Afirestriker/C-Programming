
/**accept the number of integers to stored, create an array using dynamic memory allocation [use malloc or calloc]
    and accept and print the array element.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *number_series, n, i;

    printf("\nEnter the series length: ");
    scanf("%d", &n);

    printf("\nnumber_seris address: %d", &*number_series);
    number_series = (int *)malloc(n * sizeof(int));
    printf("\nnumber_seris address: %d", &*number_series);


    if(number_series == NULL)
    {
        printf("\n\nMemory allocation not successful \n");
        exit(0);
    }

    printf("\n\nEnter series numbers: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &*(number_series + i));   ///Or.. &number_series[i]
    }

    printf("\n\nDisplaying series numbers \n");
    for(i=0; i<n; i++)
    {
        printf("%d, ", number_series[i]);    ///or... *(number_series + i)
    }

    printf("\n\nnumber_series address: %d", &*number_series);
    free(number_series);
    printf("\nnumber_seris address: %d", &*number_series);


    printf("\n\n");
    return 0;
}
