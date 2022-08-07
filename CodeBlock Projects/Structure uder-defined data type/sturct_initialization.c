
#include <stdio.h>
#include <string.h>  //used for strcpy() function

struct detail
{
    int id;
    char name[20];
};


struct detail info, info1;

int main()
{
    printf("first initialization \n");
    struct detail info = {6, "name1"};

    printf(" id  : %d \n", info.id);
    printf(" name: %s \n\n", info.name);


    printf("second initialization \n");
    struct detail info1 = {.name = "name2", .id = 8};
    printf(" id  : %d \n", info1.id);
    printf(" name: %s \n\n", info1.name);


    printf("third initialization \n");  //initializing each struct member separately
    strcpy(info.name, "name3");
    info.id = 34;
    printf(" id  : %d \n", info.id);
    printf(" name: %s \n\n", info.name);


    printf("fourth initialization \n");
    printf("\nAnother method is by taking value from user and then displaying it \n");
    printf("Enter name: ", info.name);
    scanf("%s", info.name);
    printf("Enter id: ", info.id);
    scanf("%d", &info.id);

    printf("\nDisplaying the name and id: \n");
    printf("\n\tName: %s", info.name);
    printf("\n\tid  : %d", info.id);

    printf("\n");
    return 0;
}
