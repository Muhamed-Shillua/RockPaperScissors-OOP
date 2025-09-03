#include <iostream>
#include "Game.h"

int main() {
    // Ask user for number of rounds
    int rounds;
    std::cout << "How many rounds do you want to play? ";
    std::cin >> rounds;

    // Create game and start it
    Game game(rounds);
    game.Start();

    system("pause>0");
}
