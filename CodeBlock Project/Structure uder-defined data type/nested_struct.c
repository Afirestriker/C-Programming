
#include <stdio.h>
#include <conio.h>

struct person
{
    char name[20];
    int id;
};

struct address
{
    struct person pers;
    char addr_name[20];
};

struct address addr;

int main()
{
    printf("Enter detail for person: \n");

    printf("Enter name: ");
    scanf("%s", addr.pers.name);

    printf("Enter id: ");
    scanf("%d", &addr.pers.id);

    printf("Enter address: ");
    scanf("%s", addr.addr_name);

    printf("\n\nDisplaying person details: \n\n");

    printf("\t Name: %s \n", addr.pers.name);
    printf("\t Id: %d \n", addr.pers.id);
    printf("\t Address: %s \n\n", addr.addr_name);

    return 0;
}


/*output
Enter detail for person:
Enter name: abd
Enter id: 8
Enter address: address


Displaying person details:

         Name: abd
         Id: 8
         Address: address


Process returned 0 (0x0)   execution time : 20.534 s
Press any key to continue.
*/
