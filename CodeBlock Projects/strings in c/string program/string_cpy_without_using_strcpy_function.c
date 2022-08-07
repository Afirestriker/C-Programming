
/* string copying from one string variable to another
    without using string.h library function strcpy()
*/
#include <stdio.h>

int main()
{
    int i;
    char name1[20], name2[20];

    printf("\nEnter name: ");
    scanf("%s", name1);

    for(i=0; name1[i] != '\0'; i++)
    {
        name2[i] = name1[i];
    }

    /** or using while function:
    i=0;
    while(name1[i] != '\0')
    {
        name2[i] = name1[i];
        i++;
    }
    */

    name2[i] = '\0';

    printf("\nstring 2: %s \n\n", name2);

    return 0;
}
