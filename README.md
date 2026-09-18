<div align="center">

# Hangman Game

A simple console Hangman game written in C++ — my first C++ project.

![C++](https://img.shields.io/badge/C%2B%2B-17-00599C?logo=cplusplus&logoColor=white)

</div>

> Originally written without AI assistance, entirely from scratch; later maintenance fixes were AI-assisted.

---

## Contents

- [Overview](#overview)
- [How to play](#how-to-play)
- [Getting started](#getting-started)
- [Repository layout](#repository-layout)

## Overview

The game picks a random word from a built-in list of ten Turkish words and you
guess it letter by letter while an ASCII gallows is drawn. The in-game text is in
Turkish ("Adam Asmaca" is Turkish for Hangman).

## How to play

- The game randomly selects a word and shows one `_` per letter.
- Enter a letter to guess it; matched letters are revealed (case-insensitive).
- Each wrong letter adds a part to the hangman (head, body, arms, legs).
- You have 4 wrong guesses before the game ends; correct letters don't count
  against you. When the game ends, the word is revealed.
- Press `1` instead of a letter to guess the full word — this is how you win,
  even once every letter has been revealed.
- Press `2` when asked to play again.

## Getting started

The game is a single, dependency-free source file. Compile it with any C++11 (or
newer) compiler:

```sh
# GCC / Clang
g++ -std=c++17 -o hangman Hangman.cpp
./hangman
```

```bat
:: Visual Studio Developer Command Prompt
cl /EHsc /std:c++17 Hangman.cpp
Hangman.exe
```

It was originally developed in Visual Studio; you can also add `Hangman.cpp` to
an empty console project there.

## Repository layout

```text
.
├── Hangman.cpp   The whole game (drawing, input loop, word list)
└── README.md
```
