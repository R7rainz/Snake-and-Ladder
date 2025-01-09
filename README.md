# 🐍🎲 Snake and Ladder Game 🎲🐍

```ascii
   _____             _                        _ _               _     _           
  / ____|           | |                      | | |             | |   | |          
 | (___  _ __   __ _| | _____   __ _ _ __   __| | |    __ _  __| | __| | ___ _ __ 
  \___ \| '_ \ / _` | |/ / _ \ / _` | '_ \ / _` | |   / _` |/ _` |/ _` |/ _ \ '__|
  ____) | | | | (_| |   <  __/| (_| | | | | (_| | |__| (_| | (_| | (_| |  __/ |   
 |_____/|_| |_|\__,_|_|\_\___| \__,_|_| |_|\__,_|_____\__,_|\__,_|\__,_|\___|_|   
                                                                                  

# Snake and Ladder

## 📚 Table of Contents
- [🎮 Game Overview](#game-overview)
- [🛠️ Installation](#installation)
- [🕹️ How to Play](#how-to-play)
- [🧠 Code Insights](#code-insights)
- [🌟 Features](#features)
- [🎭 Example Gameplay](#example-gameplay)
- [🛠️ Customization](#customization)
- [🤝 Contributing](#contributing)
- [📜 License](#license)

## 🎮 Game Overview
Snake and Ladder is a classic board game brought to life in your console! Navigate a 10x10 grid, roll virtual dice, and race to the finish. But beware! Snakes will send you sliding down, while ladders offer swift ascent. Will you be the first to reach 100?

---

## 🛠️ Installation

### Prerequisites
Ensure you have a C compiler installed (e.g., GCC).

### Steps
1. Clone this repository:
   ```bash
   git clone https://github.com/yourusername/snake-and-ladder.git
   ```

2. Navigate to the project directory:
   ```bash
   cd snake-and-ladder
   ```

3. Compile the game:
   ```bash
   gcc snake_and_ladder.c -o snake_and_ladder
   ```

---

## 🕹️ How to Play

1. Run the game:
   ```bash
   ./snake_and_ladder
   ```

2. When prompted, press 'y' and Enter to roll the dice.

3. Watch your position update on the board.

4. Encounter snakes and ladders as you progress.

5. Reach or exceed position 100 to win!

---

## 🧠 Code Insights

- **`printBoard()`**: Visualizes the game state.
- **`rollDice()`**: Generates random moves (1-6).
- **`movePlayer()`**: Handles player movement, including snakes and ladders.
- **`main()`**: Orchestrates the game loop and player turns.

---

## 🌟 Features
- 🎲 Dynamic dice rolling
- 🐍 Sneaky snakes to avoid
- 🪜 Helpful ladders to climb
- 🖥️ Real-time board updates
- 🏆 Victory celebration

---

## 🎭 Example Gameplay

```
🎲 Current Board:
1  2  3  4  5  6  7  8  9  10
11 12 13 14 15 16 17 18 19 20
P  21 22 23 24 25 26 27 28 29
30 31 32 33 34 35 36 37 38 39
40 41 42 43 44 45 46 47 48 49
50 51 52 53 54 55 56 57 58 59
60 61 62 63 64 65 66 67 68 69
70 71 72 73 74 75 76 77 78 79
80 81 82 83 84 85 86 87 88 89
90 91 92 93 94 95 96 97 98 99
100

🎲 To roll the dice type y → y
Your number is → 3
Player's current position: 4

...

🐍 Snake! Moved to 27
Player's current position: 27

...

🎉 Congratulations! You won the game.
```

---

## 🛠️ Customization
Feel free to modify the game to make it your own:

- Add more snakes and ladders.
- Implement multi-player mode.
- Create special tiles with unique effects.
- Design a graphical user interface.

---

## 🤝 Contributing
Contributions are welcome! Here's how you can help:

1. Fork the repository.
2. Create a new branch:
   ```bash
   git checkout -b feature-name
   ```
3. Make your changes and commit:
   ```bash
   git commit -m 'Add some feature'
   ```
4. Push to the branch:
   ```bash
   git push origin feature-name
   ```
5. Submit a pull request.

---
