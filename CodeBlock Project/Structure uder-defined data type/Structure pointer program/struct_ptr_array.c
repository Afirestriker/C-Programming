
///structure as a array to store multiple information

#include <stdio.h>
#include <string.h>
#define MAX 2
struct person
{
  char name[20];
  int age;
};

struct person person1[MAX];
struct person *person_ptr = person1;

int main()
{
    int i;

    for(i=0; i<MAX; i++)
    {
        printf("\nEnter detail for person %d \n", i+1);

        printf("\nEnter name: ");
        scanf("%s", &person_ptr->name);

        printf("\nEnter age: ");
        scanf("%d", &person_ptr->age);

        person_ptr++;
    }

    //reset person_ptr to the based location
    person_ptr = person1;

    printf("\n\n\nDisplaying person details using person_ptr->variable_name");
    for(i=0; i<MAX; i++)
    {
        printf("\n\nDisplaying person details: %d \n", i+1);
        printf("\n\tperson name: %s", person_ptr->name);
        printf("\n\tperson age: %d", person_ptr->age);

        person_ptr++;
    }

    printf("\n\n\nDisplaying person detail using person.variable_name");
    for(i=0; i<MAX; i++)
    {
        printf("\n\nDisplaying person details: %d \n", i+1);
        printf("\n\tperson name: %s", person1[i].name);
        printf("\n\tperson age: %d", person1[i].age);
    }

    printf("\n");
    return 0;
}
