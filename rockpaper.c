#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int uchoice, comchoice;
    int userscore = 0, computerscore = 0;
    char playagain;
    char *choices[] = {"Rock", "Paper", "Scissors"};

    srand(time(0));

    do {
        printf("\nEnter your choice (1 = Rock, 2 = Paper, 3 = Scissors, 0 = Show Score): ");
        scanf("%d", &uchoice);

        if (uchoice == 0) {

            printf("Current Score -> You: %d | Computer: %d\n", userscore, computerscore);
            printf("Play again? (y/n): ");
            scanf(" %c", &playagain);
            continue; 
        }

        if (uchoice < 1 || uchoice > 3) {
            printf("Invalid choice! Please enter 0, 1, 2, or 3.\n");
            continue;
        }
        comchoice = (rand() % 3) + 1;
        printf("You chose: %s\n", choices[uchoice - 1]);
        printf("Computer chose: %s\n", choices[comchoice - 1]);
        if (uchoice == comchoice) {
            printf("It's a draw!\n");
        } else if ((uchoice == 1 && comchoice == 3) ||
                   (uchoice == 2 && comchoice == 1) ||
                   (uchoice == 3 && comchoice == 2)) {
            printf("You win this round!\n");
            userscore++;
        } else {
            printf("Computer wins this round!\n");
            computerscore++;
        }
        printf("Score -> You: %d | Computer: %d\n", userscore, computerscore);

        printf("Play again? (y/n): ");
        scanf(" %c", &playagain);

    } while (playagain == 'y' || playagain == 'Y');

    printf("\nFinal Score -> You: %d | Computer: %d\n", userscore, computerscore);
    printf("Thanks for playing!\n");

    return 0;
}