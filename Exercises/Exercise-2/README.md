# Exercise 2 - TextBattle

## Context
In many games, combat is driven by simple but reliable rules: turns, health, attack values, random damage, and win/lose conditions.

This exercise is designed to practice those foundations in C++ using a console program, prioritizing clear game flow over visual complexity.

## Learning goals
By the end of this exercise, you should be able to:

1. Model combat data using a struct or class.
2. Separate player, enemy, and battle logic into different responsibilities.
3. Use conditionals and loops to drive a turn-based system.
4. Apply random numbers to damage, healing, or enemy actions.
5. Detect battle end conditions and print a clear result.

## Main assignment
Implement a C++ program that simulates a turn-based battle between a player and an enemy.

The battle must include at minimum:

1. Player health.
2. Enemy health.
3. Player actions.
4. Enemy actions.
5. A clear victory or defeat condition.

The program must let the user choose actions each turn and show the battle state at relevant steps.

## Mandatory functional requirements

### 1) Combatant initialization
Initialize the player and the enemy with valid default values.

Rules:

1. Player health must start at a valid maximum value.
2. Enemy health must start at a valid maximum value.
3. Health cannot be lower than 0.
4. Health cannot exceed the maximum health value.

### 2) Player actions
Allow the player to choose between at least these actions:

1. Attack.
2. Defend or reduce incoming damage.
3. Heal or recover health.
4. Inspect status.
5. Quit or flee the battle.

Rules:

1. Attack must reduce enemy health.
2. Heal must not exceed maximum health.
3. Defend must change the next enemy turn or reduce the damage received.
4. Each action must be documented if you rename it.

### 3) Enemy behavior
Implement enemy behavior controlled by the program.

Minimum behavior:

1. The enemy must act after the player turn.
2. The enemy action or damage must use randomness in some way.
3. The enemy must be able to damage the player.

Rules:

1. Enemy damage must not make player health go below 0.
2. Enemy actions should be understandable when printed to the console.

### 4) Randomness
Use random values to make combat less predictable.

Minimum suggested uses:

1. Random damage within a defined range.
2. Random enemy action choice.
3. Random critical hit or miss chance, if you want to extend the battle.

Rule:

1. The random behavior must be reproducible enough to test the logic, or at least clearly explained in the README.

### 5) Battle loop
The program must run in a turn-based loop until one of these happens:

1. The player wins.
2. The player loses.
3. The player quits or flees.

Minimum suggested commands or actions:

1. attack
2. defend
3. heal
4. status
5. flee

## Technical requirements

1. Language: C++14 or higher.
2. I/O: standard console input/output.
3. You must use a struct or class for the combatants.
4. Avoid global variables for combat state.
5. The code must compile without errors using g++.

## Quality criteria

1. Clear names for variables and functions.
2. Separated responsibilities, not all battle logic inside main.
3. Basic input validation for invalid commands.
4. User-friendly messages for hits, misses, damage, and battle end.

## Definition of done
Consider the exercise complete only when all of these are true:

1. Player and enemy initialization are correct.
2. The battle loop continues until win, loss, or quit.
3. Damage and healing stay within valid health bounds.
4. Enemy turns happen automatically after the player turn.
5. The program clearly prints the current battle state.
6. Invalid commands do not crash or break the loop.

## Manual test cases (checklist)

1. Start a battle and verify both combatants show correct initial health.
2. Attack until the enemy reaches 0 health and confirm victory.
3. Take enough enemy damage to reach 0 health and confirm defeat.
4. Use heal and confirm health does not exceed maximum health.
5. Enter an invalid command and verify the loop continues.
6. Use flee and confirm the battle ends cleanly.

## Exercise deliverables
This folder should contain:

1. README.md (this document + your final reflection).
2. main.cpp or playerStats.cpp (exercise solution).
3. Optional: notes.md with design decisions and future improvements.

## Optional extension (if you finish early)
Add a second enemy type with different stats, or introduce a critical hit system with a small chance to deal extra damage.

## Final reflection (complete when done)
Answer briefly:

1. Which combat rule was hardest to balance and why.
2. Which bug or issue you found during testing.
3. What you would improve in version 2.
