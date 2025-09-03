#pragma once
#include "Human.h"
#include "Computer.h"
#include "Choice.h"

// Class that represents a single round of Rock-Paper-Scissors
class Round {
private:
    Human& _human;           // Reference to the human player
    Computer& _computer;     // Reference to the computer player
    Choice _humanChoice;     // Human's choice for this round
    Choice _computerChoice;  // Computer's choice for this round

    // Determines the winner of the round
    // Returns: 0 = Draw, 1 = Human wins, 2 = Computer wins
    int _DetermineWinner() const;

public:
    // Constructor that links a round with a human and computer player
    Round(Human& human, Computer& computer);

    // Executes the round (both players make a choice and score is updated)
    void Play();

    // Prints the result of the round
    void PrintResult() const;
};
