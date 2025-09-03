#include "Round.h"
#include <iostream>
using namespace std;

// Constructor: initializes round with human and computer players
Round::Round(Human& human, Computer& computer)
    : _human(human), _computer(computer) 
{
    // Human makes a choice
    _humanChoice = _human.MakeChoice();

    // Computer makes a random choice
    _computerChoice = _computer.MakeChoice();
}

// Private helper: decides the winner of the round
int Round::_DetermineWinner() const {
    // If both players picked the same choice → it's a draw
    if (_humanChoice == _computerChoice) return 0;

    // Winning conditions for the human player
    if ((_humanChoice == Choice::Stone && _computerChoice == Choice::Scissor) ||
        (_humanChoice == Choice::Paper && _computerChoice == Choice::Stone) ||
        (_humanChoice == Choice::Scissor && _computerChoice == Choice::Paper)) {
        return 1; // Human wins
    }

    // Otherwise, computer wins
    return 2;
}

// Play one round of the game
void Round::Play() {

    // Determine the winner of this round
    int winner = _DetermineWinner();

    // Update score based on the winner
    if (winner == 1) {
        _human.AddPoint();
        cout << ">> Human wins this round!\n";
    }
    else if (winner == 2) {
        _computer.AddPoint();
        cout << ">> Computer wins this round!\n";
    }
    else {
        cout << ">> This round is a draw!\n";
    }
}

// Print the choices of both players for this round
void Round::PrintResult() const {
    cout << "Human chose: " << static_cast<int>(_humanChoice)
        << ", Computer chose: " << static_cast<int>(_computerChoice) << endl;
}