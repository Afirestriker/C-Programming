
#include <stdio.h>
#include <conio.h>

struct detail
{
    char name[20];
    int id, bsal;
};

int main()
{
    struct detail manager, employee;

    printf("\nStructure is a user-defined data type which is a collection of different primitive data type.\n\nStructure is useful when if the variable of same name has to be use for different purpose.\n\n");
    printf("\nExample the variable name, id, basic-salary could be the attribute for manager as well as for employee. \nAnd instead of declaring the attribute multiple time.");
    printf("\nThe structure can be declared with two object name as manager, and employee.\n\n");


    printf("Enter the manager details as: \n");

    printf("Enter name: ");
    scanf("%[^\n]", manager.name);

    printf("Enter id: ");
    scanf("%d", &manager.id);

    printf("Enter basic salary: ");
    scanf("%d", &manager.bsal);


    printf("\n\nEnter the employee details as: \n");

    printf("Enter name: ");
    scanf("%s", employee.name);

    printf("Enter id: ");
    scanf("%d", &employee.id);

    printf("Enter basic salary: ");
    scanf("%d", &employee.bsal);


    printf("\n\nDisplaying manager detail: \n\n");

    printf("\t Name: %s \n", manager.name);
    printf("\t id: %d \n", manager.id);
    printf("\t basic salary: %d \n", manager.bsal);


    printf("\n\nDisplaying employee detail: \n\n");

    printf("\t Name: %s \n", employee.name);
    printf("\t id: %d \n", employee.id);
    printf("\t basic salary: %d \n", employee.bsal);



    return 0;
}


/*output


Structure is a user-defined data type which is a collection of different primitive data type.

Structure is useful when if the variable of same name has to be use for different purpose.


Example the variable name, id, basic-salary could be the attribute for manager as well as for employee.
And instead of declaring the attribute multiple time.
The structure can be declared with two object name as manager, and employee.

Enter the manager details as:
Enter name: manager1
Enter id: 98
Enter basic salary: 90000


Enter the employee details as:
Enter name: employee1
Enter id: 96
Enter basic salary: 80000


Displaying manager detail:

         Name: manager1
         id: 98
         basic salary: 90000


Displaying employee detail:

         Name: employee1
         id: 96
         basic salary: 80000

Process returned 0 (0x0)   execution time : 18.501 s
Press any key to continue.

*/
