// Craps game simulator

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <sys/time.h>
#include <unistd.h>

int rolldice(void);
bool playgame(void);

int main()
{
        unsigned wins = 0, loss = 0, valid_input;
        int kitty = 50, bet;
        char replay, cont;

        printf("**************************************************************************\n");
        printf("Welcome to craps! Here are the rules:\n\nOn the first roll you win if the sum of the dice is 7 or 11.\n");
        printf("You lose if the sum is 2, 3, or 12.\n");
        printf("Any other roll is called the 'point' and the game continues.\n\n");
        printf("On each subsequent roll, you win if you roll the 'point' again.\n");
        printf("You lose by rolling 7. Any other roll is ignored and the game continues.\n\nAt the end of each game, ");
        printf("this program will ask you whether or not to play again. Enter 'y' to play again.\n\nYou start with $50. ");
        printf("Enter a bet to roll and begin the game. Press 'enter' to roll the dice. Have fun!\n");
        printf("**************************************************************************\n");

    
        do {
            valid_input = 0;  // Reset valid_input for each new bet

            do {
                printf("\nYou have $%d left.\n", kitty);
                printf("Enter a bet: $");
                if (scanf("%d", &bet) != 1) {
                    // Clear input buffer if invalid input
                    int c;
                    while ((c = getchar()) != '\n' && c != EOF);
                    printf("Invalid input. Please enter a number.\n");
                    continue;  // Skip the rest of the loop and prompt again
                }

                // Clear input buffer after valid input
                int c;
                while ((c = getchar()) != '\n' && c != EOF);

                if (bet <= 0) {
                    printf("Bet must be greater than zero.\n");
                } else if (bet > kitty) {
                    printf("You don't have enough money left to bet $%d! Sad!\n", bet);
                    printf("Please bet less than what you have remaining (as a reminder you have $%d left)\n", kitty);
                } else {
                    valid_input = 1;  // Valid input received
                }
        } while (!valid_input);


        if (playgame()) {
            wins++;
            kitty += bet;
            printf("\nYou win!\n");
        } else {
            loss++;
            kitty -= bet;
            printf("\nYou lose!\n");
            if (kitty == 0) {
                goto player_bust;
                // Break the nested loop and remove play again option.
            }
        }

        printf("\nPlay again? ('y') to replay. Otherwise enter any other key): ");
        scanf(" %c", &replay);
        
        // Clear input buffer
        int c;
        while ((c = getchar()) != '\n' && c != EOF);

    } while (replay == 'y'|| replay == 'Y');

    player_bust:
    if(kitty <= 0){
        printf("\nYou went bust! Sucks for you! Better luck next time. :(\n");
    }
    else if(kitty <=50){
        printf("\nLeaving now? You were soooooo close to winning!\nOh well, get out while you still have something left. Better luck next time!\n");
    }
    else{
        printf("\nYOU WON!!! Smart decision leaving the table now. Come back and play again soon!\n");
    }

    printf("\nYOUR WINNINGS: $%d\nTotal Wins: %u \nTotal Losses: %u\n\n", kitty, wins, loss);

    return 0;
}


bool playgame(void)
{  
   
    int first_roll, current_roll;
    char input;

   // First roll
    
        first_roll = rolldice();
        printf("\nYou rolled: %d", first_roll);
        
        
        switch(first_roll){
            case 7: case 11:
            return true;

            case 2: case 3: case 12:
            return false;

            default:
            printf("\n%d is your 'point'!", first_roll);
            break;
        }

    // Subsequent rolls

    while(1) {

        while((input = getchar()) == '\n'){

            current_roll = rolldice();
            printf("You rolled: %d", current_roll);
            
            if (current_roll == first_roll){
                return true;
            }
            else if (current_roll == 7){
                return false;
            }
            else{
                break;
            }
        }

    }

}

int rolldice(void){
    int die1, die2, totalroll;
    unsigned randseed;

    randseed = time(NULL) ^ getpid() ^ clock();
    srand(randseed);

    die1 = (rand() % 6) + 1;
    die2 = (rand() % 6) + 1;

    totalroll = die1 + die2;

    return totalroll;
    
}


