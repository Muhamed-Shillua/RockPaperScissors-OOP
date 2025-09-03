# Rock, Paper, Scissors (OOP Version)

This repository contains a **C++ Object-Oriented Programming (OOP)** implementation of the classic game *Rock, Paper, Scissors*.
It is a refactored version of a procedural implementation, redesigned to apply OOP concepts such as **abstraction, encapsulation, inheritance, and polymorphism**.

---

## Project Overview

* **Purpose:** Educational project to practice OOP in C++.
* **Design Approach:**

  * The game logic is modeled around **players** (Human vs Computer).
  * Each player is represented as a class that extends from an abstract base class.
  * Rounds are handled by a separate class to ensure clean structure.
* **Key Features:**

  * Human player provides input through the console.
  * Computer player generates random choices.
  * Score is tracked per player across rounds.
  * Clear separation of responsibilities across classes.

---

## Class Design

### 1. `Choice` (Enum)

Represents the possible moves in the game:

* `Stone`
* `Paper`
* `Scissor`

### 2. `Player` (Abstract Class)

* Base class for all players.
* Defines shared properties like `_Score`.
* Declares pure virtual function:

  ```cpp
  virtual Choice MakeChoice() = 0;
  ```

### 3. `Human` (Derived Class)

* Inherits from `Player`.
* Contains an attribute `_Name`.
* Implements `MakeChoice()` to read input from the console.

### 4. `Computer` (Derived Class)

* Inherits from `Player`.
* Generates a random choice using a helper function `_GenerateRandomNumber()`.
* Implements `MakeChoice()` with randomness.

### 5. `Round`

* Manages a single round of the game.
* Compares choices of human vs computer.
* Updates scores accordingly.

### 6. `Game`

* High-level manager of the whole game flow.
* Handles multiple rounds.
* Displays the final winner.

---

## OOP Concepts Practiced

* **Abstraction:** `Player` as an abstract base class.
* **Encapsulation:** Player scores and names kept private/protected.
* **Inheritance:** `Human` and `Computer` inherit from `Player`.
* **Polymorphism:** `MakeChoice()` overridden differently in Human vs Computer.

---

## Learning Outcomes

Through this project, the following skills were reinforced:

* Structuring code using **classes** and **inheritance**.
* Using **abstract classes** and **virtual functions** to enforce contracts.
* Separating game logic into manageable, reusable components.
* Designing and reasoning with **UML class diagrams**.
* Transitioning from **procedural programming** to **object-oriented programming**.

---

## Notes

This project is intended purely for **learning OOP design patterns** in C++.
It is not focused on advanced error handling or production-level game engines.
