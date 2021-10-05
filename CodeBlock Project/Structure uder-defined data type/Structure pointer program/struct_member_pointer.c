
///simple structure with member as a pointer, error in address variable

#include <stdio.h>
#define MAX 2

struct person
{
    int id;
    char *name[20];
    char *address[MAX];
};

int main()
{
    struct person pers;
    int i;

    printf("Enter person details: \n\n");

    printf("Enter id: ");
    scanf("%d", &pers.id);

    printf("Enter name: ");
    scanf("%s", &pers.name);

    for(i=0; i<MAX; i++)
    {
        printf("Enter address: ");
        scanf("%s", &pers.address[i]);
    }


    printf("\n\nDisplaying person details: \n\n");

    printf("\nId:    %d \n", pers.id);
    printf("\nName:  %s \n\n", pers.name);

    for(i=0; i<MAX; i++)
    {
        printf("Address: %s \n", pers.address[i]);
    }



    printf("\n");
    return 0;
}
