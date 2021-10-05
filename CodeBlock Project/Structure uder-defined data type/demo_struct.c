
#include<stdio.h>

struct student
{
    char *name[20];
    int *age;
    char *program[20];
    //char *subjects[5];
};

int main()
{
    struct student stu, *ptr_stu = &stu;

    //Or declare struct pointer separately
    //struct student *ptr_stu = &stu;
    int i;

    printf("Enter members using structure variable: \n\n");

    printf("Name: ");
    scanf("%s", stu.name);
    printf("Age:");
    scanf("%d", &stu.age);
    printf("Program enrolled:");
    scanf("%s", stu.program);

   /* for(i = 0; i < 5; i++)
    {
        printf("Subject : ");
        scanf("%s", stu.subjects[i]);
    }*/



    printf("Accessing members using structure variable: \n\n");

    printf("Name: %s\n", stu.name);
    printf("Age: %d\n", stu.age);
    printf("Program enrolled: %s\n", stu.program);

  /*  for(i = 0; i < 5; i++)
    {
        printf("Subject : %s \n", stu.subjects[i]);
    }*/


    printf("\n\nEnter members using pointer variable: \n\n");

    printf("Name: ");
    scanf("%s", ptr_stu->name);
    printf("Age: ");
    scanf("%d", &ptr_stu->age);
    printf("Program enrolled: ");
    scanf("%s", ptr_stu->program);



    printf("\n\nAccessing members using pointer variable: \n\n");

    printf("Name: %s\n", ptr_stu->name);
    printf("Age: %d\n", ptr_stu->age);
    printf("Program enrolled: %s\n", ptr_stu->program);

   /* for(i = 0; i < 5; i++)
    {
        printf("Subject : %s \n", ptr_stu->subjects[i]);
    }*/

    // signal to operating system program ran fine
    return 0;
}
