
#include <stdio.h>
#include <conio.h>
#include <process.h>
int main()
{
    int num1, num2, choice;
    float divide;

    printf("Enter two separate number: \n");

    scanf("%d%d", &num1, &num2);

    printf("Menu Driven: \n\t1. Addition \n\t2. Substract \n\t3. Multiplication \n\t4. Division \n\t5. Exit \n\t\t");

    printf("Enter the choice number: ");
    scanf("%d", &choice);

        switch(choice)
        {
            case 1: printf("Addition: %d\n", num1 + num2);
                    break;
            case 2: printf("Substract: %d\n", num1 + num2);
                    break;
            case 3: printf("Multiplication: %d\n", num1 * num2);
                    break;

            case 4: divide = num1/num2;
                    printf("Division: %f\n", divide);
                    break;
            case 5: exit(0);
                    break;

        }


    system("pause");
    return 0;
}
