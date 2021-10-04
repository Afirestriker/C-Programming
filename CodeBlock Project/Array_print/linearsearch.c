
//date 23-11-2019
#include <stdio.h>
#include <conio.h>

int main()
{
    int a[4], n, i, x, flag=0;

    printf("Enter the number value to add: ");
    scanf("%d",&n);


    for(i=0; i<n; i++)
    {
        printf("\nEnter the %d number: ",i);
        scanf("%d",&a[i]);
    }

    printf("\nEnter the number to search: ");
    scanf("%d", &x);

    for(i=0; i<n; i++)
    {
        if(a[i] == x)
        {
            flag =1;
            break;
        }
    }

    if(flag==1)
    {
        printf("\n\tNumber found at position %d",i);
    }
    else
    {
        printf("\n\tNumber not found");
    }



    return 0;
}
