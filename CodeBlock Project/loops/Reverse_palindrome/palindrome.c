
//Palindrome number
//25-11-2019
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, t, d, rev=0;

    printf("Check if the number is palindrome \nEnter the number: ");
    scanf("%d",&n);

    t = n;
    while(t>0)
    {
        d = t%10;

        rev = (rev*10) + d;

        t /= 10;
    }
    if(rev==n)
        printf("\n%d is a palindrome number \n",n);
    else
        printf("\n%d is not a palindrome number \n",n);


    return 0;
}
