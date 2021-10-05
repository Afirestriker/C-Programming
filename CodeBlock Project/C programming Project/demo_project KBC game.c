
//edited KBC_game.c on date 22-12-2019
#include <stdio.h>
#include <conio.h>


int main()
{
    int i=1, choice = 0, resume, replay;
    char ch;


    do
    {
        printf("\n\n\tWelcome to the game KBC\n\n");

        for(i; i<=10; i++)
        {

            choice = 0;
            switch(i)
            {
                case 1: printf("1.what is the sum of 1+1\n 1. 2\n 2. 4\n 3. 6\n 4. 11\n Enter the choice: ");
                        scanf("%d", &choice);

                        if(choice == 1)
                            {
                                printf("\tcorrect answer you won %d000 \n",i);
                                resume=i;
                                printf("Hit enter to continue \nGo to menu: press 'M' \n");
                                    ch = getch();
                                    //putch(ch);
                                    break;
                            }
                        else
                            {
                                printf("\tBetter luck next time \n");
                                resume = i;
                                i = 11;
                            }
                        break;

                case 2: printf("\n\n2.Number of character in a vowel\n 1. 3\n 2. 5\n 3. 6\n 4. 0\n Enter the choice: ");
                        scanf("%d", &choice);

                        if(choice == 2)
                           {
                             printf("\tCorrect answer you won %d000 \n", i);
                             resume = i;
                             printf("Hit enter to continue \nGo to menu: press 'M' \n");
                                ch = getch();
                                //putch(ch);
                                break;
                           }
                        else
                            {
                                printf("\tBetter luck next time \n");
                                resume = i;
                                i = 11;
                            }
                        break;

                case 3: printf("\n\n3.The International Literacy Day is observed on \n");
                        printf("1.Sep 8 \n2.Nov 28 \n3.May 2 \n4.Sep 22 \n");

                        printf("Enter the choice: ");
                        scanf("%d", &choice);

                        if(choice == 1)
                        {
                            printf("\tCorrect answer you won %d000 \n", i);
                            resume = i;
                            printf("Hit enter to continue \nGo to menu: press 'M' \n");
                            ch = getch();
                            //putch(ch);
                            break;
                        }
                        else
                        {
                            printf("\tBetter luck next time \n");
                            resume = i;
                            i = 11;
                        }
                        break;

                case 4: printf("\n\n4.The language of Lakshadweep. a Union Territory of India, is \n");
                        printf("1.Tamil \n2.Hindi \n3.Malayalam \n4.telugu \n");

                        printf("Enter the choice: ");
                        scanf("%d", &choice);

                        if(choice == 3)
                        {
                            printf("\tCorrect answer you won %d000 \n", i);
                            resume = i;
                            printf("Hit enter to continue \nGo to menu: press 'M' \n");
                            ch = getch();
                            //putch(ch);
                            break;
                        }
                        else
                        {
                            printf("\tBetter luck next time \n");
                            resume = i;
                            i = 11;
                        }
                        break;

                case 5: printf("\n\n5.Pongal is a popular festival of which state \n");
                        printf("1.Karnatake \n2.Kerala \n3.Tamil Nadu \n4.Andra Pradesh \n");

                        printf("Enter the choice: ");
                        scanf("%d", &choice);

                        if(choice == 3)
                        {
                            printf("\tCorrect answer you won %d000 \n", i);
                            resume = i;
                            printf("Hit enter to continue \nGo to menu: press 'M' \n");
                            ch = getch();
                            //putch(ch);
                            break;
                        }
                        else
                        {
                            printf("\tBetter luck next time \n");
                            resume = i;
                            i = 11;
                        }
                        break;

                case 6: printf("\n\n6.Onam is the main festival of \n");
                        printf("1.Tamil Nadu \n2.Karnataka \n3.Andra Pradesh \n4.Kerala \n");

                        printf("Enter the choice: ");
                        scanf("%d", &choice);

                        if(choice == 4)
                        {
                            printf("\tCorrect answer you won %d000 \n", i);
                            resume = i;
                            printf("Hit enter to continue \nGo to menu: press 'M' \n");
                            ch = getch();
                            //putch(ch);
                            break;
                        }
                        else
                        {
                            printf("\tBetter luck next time \n");
                            resume = i;
                            i = 11;
                        }
                        break;

                case 7: printf("\n\n7.Kathak is a classical dance of \n");
                        printf("1.Manipur \n2.North India \n3.Tamil Nadu \n4.Kerala \n");

                        printf("Enter the choice: ");
                        scanf("%d", &choice);

                        if(choice == 2)
                        {
                            printf("\tCorrect answer you won %d000 \n", i);
                            resume = i;
                            printf("Hit enter to continue \nGo to menu: press 'M' \n");
                            ch = getch();
                            //putch(ch);
                            break;
                        }
                        else
                        {
                            printf("\tBetter luck next time \n");
                            resume = i;
                            i = 11;
                        }
                        break;

                case 8: printf("\n\n8.The Komark Temple is dedicated to \n");
                        printf("1.Vishnu \n2.Shiva \n3.Krishna \n4.Sun - God \n");

                        printf("Enter the choice: ");
                        scanf("%d", &choice);

                        if(choice == 4)
                        {
                            printf("\tCorrect answer you won %d000 \n", i);
                            resume = i;
                            printf("Hit enter to continue \nGo to menu: press 'M' \n");
                            ch = getch();
                            //putch(ch);
                            break;
                        }
                        else
                        {
                            printf("\tBetter luck next time \n");
                            resume = i;
                            i = 11;
                        }
                        break;

                /*case 9: printf("\n\n");
                        printf("1.");
                        printf("Enter the choice: ");
                        scanf("%d", &choice);

                        if(choice == )
                        {
                            printf("\tCorrect answer you won %d000 \n", i);
                            resume = i;
                            printf("Hit enter to continue \nGo to menu: press 'M' \n");
                            ch = getch();
                            //putch(ch);
                            break;
                        }
                        else
                        {
                            printf("\tBetter luck next time \n");
                            resume = i;
                            i = 11;
                        }
                        break; */



                default: break;

            }

                if(ch == 'm' || ch == 'M')
                {
                    //printf("\nTerminating program...Bye..Bye... \n");
                    break;
                }

        }


        if(i<=10)
        {
            printf("\n1.Resume \n2.Replay whole game \n4.Select the question to start from \n5.Exit \nSelect: ");
            scanf("%d", &replay);
        }
        else
        {
          printf("\n2.Replay whole game \n3.Replay from previous question \n5.Exit \nSelect: ");
          scanf("%d", &replay);
        }

        switch(replay)
        {
            case 1: i++;
                    break;

            case 2: i=1;
                    break;

            case 3: //printf("t = %d", t);
                    i = resume;
                    break;

            case 4: if(i<11)
                    {
                        printf("\nEnter the question number: ");
                        scanf("%d", &i);
                        if(i<=resume)
                            break;
                        else
                        {
                            printf("\nInvalid input \n");
                            replay = 5;
                            break;
                        }

                    }

            default: break;
        }

        if(replay == 5)
        {
            printf("\nTerminating program...Bye..Bye... \n");
            getch();
            break;
        }


    }while(1);

    return 0;
}
