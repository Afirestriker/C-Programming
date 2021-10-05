
/* Create a structure named "employee" with members - id, name and salary, Create a structure variable to accept values
    of an employee. Create a pointer to a structure to display data of the employees
*/

#include <stdio.h>
#include <conio.h>

struct employee
{
    int id, salary;
    char name[20];
}emp;

int main()
{
    struct employee *ptr_emp = &emp;

    printf("\nEnter employee detail: \n");
    printf("\nEnter employee id: ");
    scanf("%d", &emp.id);
    printf("Enter employee name: ");
    scanf("%s", emp.name);
    printf("Enter employee salary: ");
    scanf("%d", &emp.salary);

    printf("\nDisplaying employee detail using pointer to a structure \n");
    printf("\nEmployee id    : %d", ptr_emp->id);
    printf("\nEmployee name  : %s", ptr_emp->name);
    printf("\nEmployee salary: %d", ptr_emp->salary);


    printf("\n");
    return 0;
}
