#include "Game.h"
#include <iostream>
using namespace std;

// Constructor: set number of rounds
Game::Game(int rounds) : _totalRounds(rounds) {}

// Start the game and play multiple rounds
void Game::Start() {
    cout << "\n===== Rock Paper Scissors Game =====\n";

    for (int i = 1; i <= _totalRounds; i++) {
        cout << "\n--- Round " << i << " ---\n";

        // Create a round with human and computer
        Round round(_human, _computer);

        // Play one round
        round.Play();

        // Print choices and round result
        round.PrintResult();
    }

    // After all rounds, print final result
    _PrintFinalResult();
}

// Helper: print final score and announce winner
void Game::_PrintFinalResult() const {
    cout << "\n===== Final Score =====\n";
    cout << "Human: " << _human.getScore() << endl;
    cout << "Computer: " << _computer.getScore() << endl;

    if (_human.getScore() > _computer.getScore())
        cout << ">> Congratulations! You are the winner!\n";
    else if (_computer.getScore() > _human.getScore())
        cout << ">> Computer wins! Better luck next time.\n";
    else
        cout << ">> It's a draw!\n";
}
