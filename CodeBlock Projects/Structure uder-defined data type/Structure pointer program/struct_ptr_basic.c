
///structure program

#include <stdio.h>
#include <string.h>

struct person
{
    char name[20];
    int age;
    float weight;
};

int main()
{
    struct person person1 = {26, 66};
    struct person *person_ptr;

    strcpy(person1.name, "abd");

    printf("person1: %d \n", person1);

    person_ptr = &person1;

    printf("person_ptr: %d", person_ptr);           //with/without person_ptr initialization
    printf("\n\n*person_ptr: %d", *person_ptr);     //with/without person_ptr initialization

    printf("\n\n\tPerson name: %s", person1.name);
    printf("\n\n\tPerson name ptr: %s", (*person_ptr).name);
    printf("\n\n\tPerson name ptr: %s \n", person_ptr->name);

    printf("\n\n\tPerson name address: %d", &person1.name);
    printf("\n\n\tPerson name address prt: %d", &person_ptr->name);

    printf("\n\n\tPerson age: %d", person1.age);
    printf("\n\n\tPerson age ptr: %d", (*person_ptr).age);
    printf("\n\n\tPerson age ptr: %d \n", person_ptr->age);  // modified from (*person).age

    printf("\n\n\tPerson age address: %d", &person1.age);
    printf("\n\n\tPerson age address ptr: %d \n", &person_ptr->age);

    printf("\n\n\tPerson weight: %.2f", person1.weight);
    printf("\n\n\tPerson weight: %.2f", (*person_ptr).weight);
    printf("\n\n\tPerson weight: %.2f \n", person_ptr->weight);     //modified from (*person).weight

    printf("\n\n\tPerson weight address: %d", &person1.weight);
    printf("\n\n\tPerson weight address ptr: %d", &person_ptr->weight);

    printf("\n");

    return 0;
}
