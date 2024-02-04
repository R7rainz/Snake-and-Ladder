# 🐍🎲 Snake and Ladder Game 🎲🐍

Welcome to this exciting console-based Snake and Ladder game in C! Experience the thrill of rolling the dice, navigating through the board, and conquering challenges with snakes and ladders.

## Instructions 📜

1. Compile the code using a C compiler (e.g., `gcc snake_and_ladder.c -o snake_and_ladder`).
2. Run the executable (e.g., `./snake_and_ladder`) to embark on your gaming adventure.
3. Follow on-screen instructions to roll the dice and explore the dynamic game board.

## Code Overview 🖥️

- **printBoard**: Function to display the game board with the current player position.
- **rollDice**: Function to generate a random number between a specified range to simulate dice rolling.
- **movePlayer**: Function to handle player movement based on snakes and ladders on the board.
- **main**: The main game loop that initializes the board, snakes, and ladders. Players roll the dice and move according to the rules until reaching or exceeding the final position (100).

## Game Components 🎮

### 🎨 Board
The game board is a visual feast represented as an array with positions from 1 to 100.

### 🐍 Snakes
Encounter four slippery snakes! Land on their head, and they'll swiftly slide you down to their tails.

### 🪜 Ladders
Discover four ladders! Ascend to their top, and you'll leap forward to a higher position.

### 🎲 Player Movement
Roll the dice (values 1 to 6) and witness your avatar's journey across the vibrant board. The `movePlayer` function ensures a thrilling experience with snakes and ladders.

### 🏆 Winning
The game unfolds until a player reaches or exceeds position 100. The moment of victory is celebrated with a hearty congratulations.

## Example Gameplay 🚀

Save to grepper
🎲 Current Board:
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
P 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39
40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59
60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79
80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99
100

🎲 To roll the dice type y → y
Your number is → 3
Player's current position: 4

🎲 Current Board:
1 2 3 P 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40
41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60
61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80
81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100

🐍 Snake! Moved to 27
Player's current position: 27
...
🎉 Congratulations! You won the game.

Feel the excitement, modify the code, and create your personalized version of this classic game. Enjoy your journey through the snake-and-ladder universe! 🚀🎲🐍
