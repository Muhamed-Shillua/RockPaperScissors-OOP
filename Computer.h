#pragma once
#include <string>
#include <cstdlib> // For rand() and srand()
#include <ctime>  // For time()
#include "Player.h"
#include "Choice.h"
using namespace std;


class Computer : public Player
{
private:
    int _GenerateRandomNumber(int From, int To);

public:
    Computer();                        // Constructor to set name
    Choice MakeChoice() override;      // Override pure virtual function from Player
    ~Computer() {}                    // Destructor (default, no dynamic memory)
};

