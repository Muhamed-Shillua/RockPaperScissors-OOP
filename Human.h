#pragma once
#include <string>
#include "Player.h"
#include "Choice.h"
using namespace std;

// Human Player inherits from Player
class Human : public Player
{
private:
    string _Name;  // Player's name

public:
    Human();         // Constructor to set name
    string getName() const;            // Getter for name
    Choice MakeChoice() override;      // Override pure virtual function from Player
    ~Human() {}                        // Destructor (default, no dynamic memory)
};