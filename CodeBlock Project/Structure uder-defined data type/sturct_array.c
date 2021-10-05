
#include <stdio.h>
#include <conio.h>
#define MAX 2

struct employee
{
    char name[20], addr[20];
    int id, bsal;
};

struct employee emp[MAX];

int main()
{
    //struct employee emp[MAX];
    int i;

    printf("Enter employee details: \n");

    for(i=0; i<MAX; i++)
    {
        printf("\nEnter detail for employee %d \n", i+1);

        printf("Enter name: ");
        scanf("%s", emp[i].name);

        printf("Enter id: ");
        scanf("%d", &emp[i].id);

        printf("Enter basic Salary: ");
        scanf("%d", &emp[i].bsal);
    }

    printf("\n\nDisplaying employee details \n\n");

    for(i=0; i<MAX; i++)
    {
        printf("Displaying detail for employee %d \n", i+1);

        printf("\tName: %s \n", emp[i].name);
        printf("\tId: %d \n", emp[i].id);
        printf("\tBasic salary: %d \n\n", emp[i].bsal);
    }

    return 0;
}


/*output
Enter employee details:

Enter detail for employee 1
Enter name: abd
Enter id: 6
Enter basic Salary: 80000

Enter detail for employee 2
Enter name: abdd
Enter id: 8
Enter basic Salary: 90000


Displaying employee details

Displaying detail for employee 1
        Name: abd
        Id: 6
        Basic salary: 80000

Displaying detail for employee 2
        Name: abdd
        Id: 8
        Basic salary: 90000


Process returned 0 (0x0)   execution time : 23.874 s
Press any key to continue.
*/
