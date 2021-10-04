
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>


int main()
{
    int i[][3] ={ {1, 0, 0},
                  {0, 1, 0},
                  {0, 0, 1} }, rows, cols, r, c;

    bool flag =true;

    rows = sizeof(i)/sizeof(i[0]);

    cols = (sizeof(i)/sizeof(i[0][0]))/rows;

    if(rows != cols)
    {
        printf("The matrix should be square matrix");
    }

    else
    {
        for(r=0; r<rows; r++)
        {
          for(c=0; c<cols; c++)
          {
                if(r==c && i[r][c] != 1)
                {flag = false;}

                if(r!=c && i[r][c] != 0)
                {flag = false;}
          }

        }

        if(flag = true)
            printf("Identity matrix");

        else
            printf("not a identity matrix");
    }



    return 0;
}
