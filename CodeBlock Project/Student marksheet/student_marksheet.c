
#include <stdio.h>
#include <conio.h>

int main()
{
    int name[20], roll, m1, m2, m3, m4, m5, total;
    float percentage;

    printf("\nEnter student information: \n");

    printf("\nStudent name: ");
    scanf("%[^\n]", name);

    printf("\nStudent roll number: ");
    scanf("%d", &roll);

    printf("\nStudent marks in subjects: \n");
    printf("Sub1: ");
    scanf("%d", &m1);

    printf("Sub2: ");
    scanf("%d", &m2);

    printf("Sub3: ");
    scanf("%d", &m3);

    printf("Sub4: ");
    scanf("%d", &m4);

    printf("Sub5: ");
    scanf("%d", &m5);


    printf("\n\nDisplaying student marksheet: \n\n");

    printf("student name: %s \tRoll number: %d \n", name, roll);

    printf("\nMarks in\n sub1: %d \n sub2: %d \n sub3: %d \n sub4: %d \n sub5: %d \n", m1, m2, m3, m4, m5);

    total = m1+m2+m3+m4+m5;
    printf("\nTotal: %d \t\t", total);

    percentage =  ((float)total/ (float)500) * 100;
    printf("Percentage: %f \n\n", percentage);

    if(percentage >= 45)
        printf("Grade: PASS \n");
    else
        printf("Grade: FAIL \n");

    return 0;
}
