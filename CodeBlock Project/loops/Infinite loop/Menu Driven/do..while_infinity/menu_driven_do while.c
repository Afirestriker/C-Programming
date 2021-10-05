
//menu driven programne continue on user command yes/no
#include <stdio.h>
#include <conio.h>

int main()
{
    int n1, n2, choice;
    char ch;

    printf("Menu driven: \n\n");

    printf("1. Addition \n2. Subtraction \n3. Multiplication \n4. Divide \n\n");


    do{
       printf("\n\tEnter the choice: ");
       scanf("%d",&choice);

       printf("\nEnter number 1: ");
       scanf("%d",&n1);

       printf("\nEnter number 2: ");
       scanf("%d",&n2);

            switch(choice)
            {
                case 1: printf("Add: %d \n", n1 + n2); break;

                case 2: printf("Sub: %d \n", n1 - n2);
                        break;

                case 3: printf("Multi: %d \n", n1 * n2);
                        break;

                case 4: printf("Div: %d \n", n1 / n2);
                        break;
                default: break;
            }


            printf("\nDo you want to exit y/n \n");
            scanf(" %c", &ch);


    }while( ch == 'n' || ch == 'N');


    return 0;
}
