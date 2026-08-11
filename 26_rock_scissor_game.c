#include <Stdio.h>
#include <stdlib.h>
#include <time.h>

int getcomputerchoice();
int getuserchoice();
int checkwinner(int userchoice, int computerchoice);

int main()
{
    srand(time(NULL));

    printf("***Rock Paper Scissor*** \n");
    int userchoice = getuserchoice();
    int computerchoice = getcomputerchoice();

    switch (userchoice)
    {
    case 1:
        printf("You chose Rock!\n");
        break;
    case 2:
        printf("You chose Paper!\n");
        break;
    case 3:
        printf("You chose Scissor!\n");
        break;
    }

    switch (computerchoice)
    {
    case 1:
        printf("computer chose Rock!\n");
        break;
    case 2:
        printf("computer chose Paper!\n");
        break;
    case 3:
        printf("computer chose Scissor!\n");
        break;
    }

    checkwinner(userchoice, computerchoice);
    return 0;
}

int getcomputerchoice()
{
    return rand() % 3 + 1;
}
int getuserchoice()
{
    int choice = 0;
    do
    {
        printf("choose option\n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissor\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

    } while (choice < 1 || choice > 3);
    return choice;
}

int checkwinner(int userchoice, int computerchoice)
{
    if (userchoice == computerchoice)
    {
        printf("Its a tie");
    }
    else if ((userchoice == 1 && computerchoice == 3) ||
             (userchoice == 2 && computerchoice == 1) ||
             (userchoice == 3 && computerchoice == 2))
    {
        printf("You win!");
    }
    else
    {
        printf("You lost!!");
    }
    return 0;
}