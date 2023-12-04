# Hangman Game in C++

## Overview
Hangman is a classic word-guessing game implemented in C++. The player tries to guess a word by suggesting letters within a certain number of guesses.

## Features
- A large variety of words for guessing.
- Simple text-based user interface.
- Feedback on correct and incorrect guesses.
- Count of remaining guesses.
- Reveals the full word at the end of the game.

## Compilation and Execution
To compile and run the Hangman game, ensure you have a C++ compiler like g++. Then, compile the source code using the following command:

```bash
g++ -o hangman main.cpp
```

Run the compiled program using:

```bash
./hangman
```

## How to Play
- The game randomly selects a word from the provided word list.
- The player guesses one letter at a time.
- The game provides feedback on whether the guessed letter is in the word.
- The goal is to guess the word before running out of allowed guesses.
