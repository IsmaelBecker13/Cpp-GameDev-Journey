# Exercise 1 - PlayerStats

## Context
In almost every game, there is a player entity with internal state (health, position, etc.) and rules to modify that state (movement, taking damage, healing).

This exercise is designed to train that foundation in C++ using a console program, prioritizing modeling clarity over visual complexity.

## Learning goals
By the end of this exercise, you should be able to:

1. Model player data using a struct or class.
2. Separate state (data) from behavior (functions/methods).
3. Read console commands and apply them to player state.
4. Validate boundaries to avoid invalid states.
5. Print a clear and reproducible final state.

## Main assignment
Implement a C++ program that creates and controls a player with the following minimum attributes:

1. Name.
2. Current health.
3. Maximum health.
4. 2D position (x, y).

The program must accept a sequence of console commands to modify the player and show the player state at relevant steps.

## Mandatory functional requirements

### 1) Player initialization
Initialize the player with valid default values.

Rules:

1. Current health must start equal to maximum health.
2. Health cannot be lower than 0.
3. Health cannot exceed maximum health.
4. Initial position can be (0, 0) or any value you explicitly document in your solution README.

### 2) Movement
Allow the player to move in a 2D plane.

Minimum supported actions:

1. Move up.
2. Move down.
3. Move left.
4. Move right.

Rule:

1. Each movement changes x or y by one unit (or a fixed step you document).

### 3) Health system
Implement actions for:

1. Taking damage.
2. Healing.

Rules:

1. After taking damage, health must never go below 0.
2. After healing, health must never exceed maximum health.

### 4) State visualization
Display the player state at least at these moments:

1. Initial state.
2. After each valid command that changes state.
3. Final state before exiting the program.

The displayed state must include at minimum:

1. Name.
2. Current health and maximum health.
3. Position x, y.

### 5) Command loop
The program must run a command-reading loop until an exit command is received.

Minimum suggested commands (you can rename them, but document it):

1. move up
2. move down
3. move left
4. move right
5. damage N
6. heal N
7. status
8. exit

## Technical requirements

1. Language: C++14 or higher.
2. I/O: standard console input/output.
3. You must use a struct or class for the player.
4. Avoid global variables for player state.
5. The code must compile without errors using g++.

## Quality criteria

1. Clear names for variables and functions.
2. Separated responsibilities (do not place all logic inside main).
3. Basic input validation for invalid commands.
4. User-friendly error messages.

## Definition of done
Consider the exercise complete only when all of these are true:

1. Player initialization is correct.
2. All required commands work.
3. Health always stays in the range [0, maxHealth].
4. Movement updates x/y correctly.
5. State output has consistent formatting.
6. Invalid commands do not crash or break the loop.

## Manual test cases (checklist)

1. Run status at startup and verify initial values.
2. Execute several move commands and verify expected position.
3. Apply large damage and confirm health = 0.
4. Heal from 0 and confirm health never exceeds maxHealth.
5. Enter an invalid command and verify the loop continues.
6. Exit with exit and confirm final output appears.

## Exercise deliverables
This folder should contain:

1. README.md (this document + your final reflection).
2. main.cpp (exercise solution).
3. Optional: notes.md with design decisions and future improvements.

## Optional extension (if you finish early)
Add an energy or stamina system with rules similar to health, and add a sprint action that consumes stamina to move two cells.

## Final reflection (complete when done)
Answer briefly:

1. Which design decision was hardest and why.
2. Which bug or issue you found during testing.
3. What you would improve in version 2.
