
#include <stdio.h>
#include <conio.h>

int main()
{
    int a[20][20], r, c, rn, cn, flag =0;


    printf("Enter the number of rows and column in matrix:  \n");
    scanf("%d%d", &rn, &cn);


    if(rn!=cn)
    {
        printf("\nRow and column should be equal \n");
    }

    else
    {
        for(r=0; r<rn; r++)
        {
            for(c=0; c<cn; c++)
            {
                printf("\nEnter the %d,%d value in matrix: ", r,c);
                scanf("%d",&a[r][c]);
            }
        }


        for(r=0; r<rn; r++)
        {
            for(c=0; c<cn; c++)
            {
                if(r==c && a[r][c] != 1 || r!=c && a[r][c] !=0)
                {
                    flag = 1;
                    break;
                }

            }
        }

        if(flag==1)
        {
            printf("\n\tNot a identity matrix \n");
        }
        else
        {
            printf("\n\tIdentity matrix \n");
        }

    }//else close


    return 0;
}
