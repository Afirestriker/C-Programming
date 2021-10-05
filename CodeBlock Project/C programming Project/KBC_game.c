
#include <stdio.h>
#include <conio.h>


int main()
{
    int i=1, choice = 0, t;
    char ch;


    //while(1)
    do
    {
        printf("\n\n\tWelcome to the game KBC\n\n");

        for(i; i<=10; i++)
        {
            t = i;
            choice = 0;
            switch(i)
            {
                case 1: printf("1.what is the sum of 1+1\n 1. 2\n 2. 4\n 3. 6\n 4. 11\n Enter the choice: ");
                        scanf("%d", &choice);

                        if(choice == 1)
                            printf("\tcorrect answer you won %d000 \n",i);
                        else
                            {
                                printf("\tBetter luck next time \n");
                                i = 11;
                            }
                        break;

                case 2: printf("\n\n2.Number of character in a vowel\n 1. 3\n 2. 5\n 3. 6\n 4. 0\n Enter the choice: ");
                        scanf("%d", &choice);

                        if(choice == 2)
                            printf("\tCorrect answer you won %d000 \n", i);
                        else
                            {
                                printf("\tBetter luck next time \n");
                                i = 11;
                            }
                        break;

                default: break;

            }
        }


          printf("\n\tPress Y to replay: ");
          ch = getch();
          putch(ch);

          if(ch == 'y' || ch == 'Y')
          {
            printf("\nEnter the question number from where you want to play: ");
            scanf("%d",&i);

            if(i <= t)
              continue;
            else
                printf("\nEnter number is invalid...");
          }

          else
            printf("\n\nTerminating program....\nBye..Bye... \n");
            break;

    }while(1);

    return 0;
}


/*

 char replay( char ch)
 {
     char ch;

     printf("Press Y to continue: ");
     ch = getch();
     putch(ch);

     if(ch=='Y' || ch=='y')
     {
         printf("\nEnter the question number from where you want to play: ");
         scanf("%d",&i);

         replay(i);
     }

          else
            printf("\n\nTerminating program....\nBye..Bye... \n");
            break;

           return ch;
     }



 int replay_q(int i)
            {
                if(i <= t)
                    continue;
                else
                    printf("\nEnter number is invalid...");

                return i;
            }
*/
