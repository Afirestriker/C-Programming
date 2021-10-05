
#include <stdio.h>
#include <conio.h>

int main()
{
    register int i = 0;

    printf("\nRegister storage class mean that the variable to which register storage class\n is assign then, that variable is store\n in the CPU Register not in memory\n\n *And also fetching the address is not possible since the variable is not store in memory\n\n");
    printf("*Not every-time the variable with register storage class is store in CPU-Register as the\n register are limited to the system and are very much needed by the system\n to perform task faster\n the variable get store in memory in such cases \n\n");

    //here fetching the address of i shows error as variable i is store in cpu register not in cpu memory
//    printf("Address of i: %d \n\n", &i);

    for(i=1; i<=40; i++)
    {
        printf("%d ", i);

        if(i%4 == 0)
          printf("\n\n");
   }

    return 0;
}
