#pragma once
#include "Choice.h"


// Abstract base class representing a generic player
class Player
{
protected:
    int _Score; 

public:
    // Constructor initializes score to zero
    Player() : _Score(0) {}

    virtual Choice MakeChoice() = 0;

    void AddPoint() { _Score++; }

    int getScore() const { return _Score; }

    // Virtual destructor ensures proper cleanup for derived classes
    virtual ~Player() {}
};
