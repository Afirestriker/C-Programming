
///mixture of structure with pointer and its members with pointer plus nested structure
//date: 07/03/2020

#include <stdio.h>
#include <string.h>

struct person
{
    char *name[20]; //note: specify size for an array whether it is ptr_array or simple array
    int *id, mob;
};

struct information
{
    struct person pers;
    char *add[20];  //note: specify size for an array
};

struct information info, *ptr_info;

int main()
{
    ptr_info = &info;

    printf("\nNote: while using structure member as pointer, there's no need to use * with prt_member for scanf nor for printf \n\n");
    printf("\nEnter the person information using ptr_struct with ptr_member\n");

    printf("\nPerson name: ");
    scanf("%s", ptr_info->pers.name);

    printf("\nPerson id: ");
    scanf("%d", &ptr_info->pers.id);

    printf("\nPerson mobile: ");
    scanf("%d", &ptr_info->pers.mob);

    printf("\nPerson address: ");
    scanf("%s", &ptr_info->add);


    printf("\n\nDisplaying person detail using ptr_struct with ptr_member \n");
    printf("\nPerson name   : %s", ptr_info->pers.name);
    printf("\nperson id     : %d", ptr_info->pers.id);
    printf("\nPerson mobile : %d", ptr_info->pers.mob);
    printf("\nperson address: %s", ptr_info->add);



    printf("\n\n");
    printf("\nEnter the person information using simple struct with ptr_member\n");

    printf("\nPerson name: ");
    scanf("%s", info.pers.name);

    printf("\nPerson id: ");
    scanf("%d", &info.pers.id);

    printf("\nPerson mobile: ");
    scanf("%d", &info.pers.mob);

    printf("\nPerson address: ");
    scanf("%s", &info.add);

    printf("\n\nDisplaying person detail using ptr_struct with ptr_member \n");
    printf("\nPerson name   : %s", info.pers.name);
    printf("\nPerson id     : %d", info.pers.id);
    printf("\nPerson mobile : %d", info.pers.mob);
    printf("\nPerson address: %s", info.add);


    printf("\n\n");
    return 0;
}


/*OUTPUT

Note: while using structure member as pointer, there's no need to use * with prt_member for scanf nor for printf


Enter the person information using ptr_struct with ptr_member

Person name: name1

Person id: 2

Person mobile: 12456

Person address: st1


Displaying person detail using ptr_struct with ptr_member

Person name   : name1
person id     : 2
Person mobile : 12456
person address: st1


Enter the person information using simple struct with ptr_member

Person name: name2

Person id: 6

Person mobile: 1462

Person address: st2


Displaying person detail using ptr_struct with ptr_member

Person name   : name2
Person id     : 6
Person mobile : 1462
Person address: st2


Process returned 0 (0x0)   execution time : 29.407 s
Press any key to continue.
*/
