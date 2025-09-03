#pragma once
#include "Human.h"
#include "Computer.h"
#include "Round.h"

// Main Game class that controls the flow of the Rock-Paper-Scissors game
class Game {
private:
    Human _human;           // Human player
    Computer _computer;     // Computer player
    int _totalRounds;       // Total number of rounds

    // Helper: prints the final winner after all rounds
    void _PrintFinalResult() const;

public:
    // Constructor initializes the game with number of rounds
    Game(int rounds);

    // Starts and runs the game
    void Start();
};
