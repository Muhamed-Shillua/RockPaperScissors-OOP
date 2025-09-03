#include "Human.h"
#include <iostream>
using namespace std;

// Constructor implementation
Human::Human() {
	_Name = "";
	_Score = 0;
}


// Getter implementation
string Human::getName() const
{
	return _Name;
}

// Human makes a choice via console input
Choice Human::MakeChoice()
{
	int Input = 0;
	cout << _Name << ", choose your move [1]: Stone, [2]: Paper, [3]: Scissor]: ";
	cin >> Input;

	// Input Validation
	while ((Input < 1) || (Input > 3)) {
		cout << "Invalid choice! Please choose again [1: Stone, 2: Paper, 3: Scissor]: ";
		cin >> Input;
	}

	return static_cast<Choice>(Input);  // Convert integer to Choice enum
}