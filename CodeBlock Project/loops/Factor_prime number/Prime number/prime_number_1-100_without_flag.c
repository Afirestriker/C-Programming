

#include <stdio.h>
#include <conio.h>

 int main()
 {
    int n, f;

    for(n=1; n<=100; n++)
    {
        for(f=2; f<=n/2; f++)
        {
            if(n%f == 0)
            {
                break;
            }
        }
        if(f>n/2)
        {
            printf("%d ", n);
        }
    }

    return 0;
}
