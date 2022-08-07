
#include <stdio.h>
#include <conio.h>

int main()
{
    int A[8][8], B[8][8], C[8][8], n, m, i, j;

    printf("Enter the number of rows and columns for both matrix: ");
    scanf("%d%d", &n, &m);

    if(n != m)
    {
        printf("\nRow and column value does not match \n");
    }
    else
    {

        printf("\nEnter the element of matrix A: \n");
        for(i=0; i<n; i++)
            for(j=0; j<m; j++)
                scanf("%d", &A[i][j]);

        printf("\n\nEnter the element for matrix B: \n");
        for(i=0; i<n; i++)
            for(j=0; j<m; j++)
                scanf("%d", &B[i][j]);

        printf("\nAddition of two matrix result: \n");
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                C[i][j] = A[i][j] + B[i][j];
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }

    }//else close

        return 0;
}
