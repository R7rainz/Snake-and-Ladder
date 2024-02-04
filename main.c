#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOARD_SIZE 100

void printBoard(int board[], int size, int playerPosition) {
    for (int i = 0; i < size; i++) {
        if (i + 1 == playerPosition) {
            printf(" P ");
        } else {
            printf(" %d ", board[i]);
        }
    }
    printf("\n");
}

int rollDice(int minValue, int maxValue) {
    return rand() % (maxValue - minValue + 1) + minValue;
}

void movePlayer(int *count, int snakes[], int snakes1[], int ladders[], int ladders1[], int dice) {
    for (int i = 0; i < 4; i++) {
        if (*count == snakes[i]) {
            *count = snakes1[i];
            printf("Snake! Moved to %d\n", *count);
            return; 
        } else if (*count == ladders[i]) {
            *count = ladders1[i];
            printf("Ladder! Moved to %d\n", *count);
            return; 
        }
    }
}

int main() {
    //VARIABLES
    int count = 0;
    int minValue = 1;
    int maxValue = 6;
    char player;

    //BOARD
    int board[BOARD_SIZE];
    for (int i = 0; i < BOARD_SIZE; i++) {
        board[i] = i + 1;
    }

    //SNAKES
    int snakes[] = {98, 42, 15, 76};
    int snakes1[] = {27, 3, 9, 44};

    //LADDERS
    int ladders[] = {5, 16, 43, 85};
    int ladders1[] = {35, 42, 72, 91};

    srand(time(NULL));

    
    while (count < 100) {
        //printing the board
        printf("\nCurrent Board:");
        printBoard(board, BOARD_SIZE, count); //calling the function printBoard
        
        //rolling the dice
        printf("\nTo roll the dice type y → ");
        scanf(" %c", &player);

        if (player == 'y' || player == 'Y') {
            int dice = rollDice(minValue, maxValue);
            printf("Your number is → %d\n", dice);
            count = count + dice;

            //moving the player on the basis of snakes and ladders
            movePlayer(&count, snakes, snakes1, ladders, ladders1, dice); //calling the function movePlayer
        }

        //checking the position of the player, it should not exceed 100
        if (count > 100) {
            count = 100;
        }

        printf("Player's current position: %d\n", count);
    }

    printf("Congratulations! You won the game.\n");

    return 0;
}
