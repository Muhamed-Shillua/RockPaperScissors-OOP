#include "Computer.h"
#include <iostream>
using namespace std;

// Initialize random seed based on current time
Computer::Computer() { srand((unsigned)time(NULL)); }

int Computer::_GenerateRandomNumber(int From, int To) 
{
	return (rand() % (To - From + 1)) + From; // Generate a random number in the range
}

Choice Computer::MakeChoice()
{
	return static_cast<Choice>(_GenerateRandomNumber(1, 3)); // Randomly select one of the three options
}

