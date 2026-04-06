# Exercise 8 - HelloRaylib

## Context
This exercise is the first step into the graphical part of the roadmap. After finishing the console-based exercises, the goal here is to learn how to open a Raylib window, draw basic shapes, and understand the minimum structure of a real-time game loop.

This exercise is designed to introduce Raylib 2D in a simple and controlled way, so you can focus on setup, rendering, and window management before adding movement or collision systems.

## Learning goals
By the end of this exercise, you should be able to:

1. Set up a basic Raylib project and include the correct headers.
2. Open and close a game window correctly.
3. Use the standard Raylib loop: `WindowShouldClose()`, `BeginDrawing()`, `EndDrawing()`.
4. Clear the background and draw simple 2D shapes.
5. Understand the minimum structure of a graphical game program.

## Main assignment
Implement a C++ program that opens a Raylib window and renders a simple scene.

The scene must include at minimum:

1. A window with a visible title.
2. A cleared background.
3. At least one geometric shape drawn on screen.
4. A clean exit when the user closes the window.

## Mandatory functional requirements

### 1) Window setup
Create a Raylib window with valid dimensions.

Rules:

1. The window must open successfully.
2. The window title must clearly identify the exercise or project.
3. The program must close cleanly without freezing or crashing.

### 2) Rendering loop
Use the standard Raylib drawing loop.

Required structure:

1. Check if the window should close.
2. Start the drawing phase.
3. Clear the background.
4. Draw the scene.
5. End the drawing phase.

Rules:

1. Drawing calls must happen between `BeginDrawing()` and `EndDrawing()`.
2. The background must be cleared every frame.
3. The program must keep running until the user closes the window.

### 3) Basic graphics
Draw at least one visible object on screen.

Minimum options:

1. A rectangle.
2. A circle.
3. A line.
4. A text label.

Rules:

1. The object must be visible against the background.
2. The object should remain on screen during the loop.
3. Text, if used, must be readable.

### 4) Program lifecycle
Handle initialization and shutdown correctly.

Rules:

1. Call `InitWindow()` before drawing.
2. Call `CloseWindow()` when the program ends.
3. Avoid leaving the window open after the loop exits.

## Technical requirements

1. Language: C++14 or higher.
2. Library: Raylib.
3. The code must compile without errors using the configured compiler.
4. The program should use a minimal and readable main loop.
5. Avoid unnecessary global state.

## Quality criteria

1. Clear naming for variables and constants.
2. Clean loop structure.
3. Simple, readable rendering code.
4. No extra complexity beyond the exercise goal.

## Definition of done
Consider the exercise complete only when all of these are true:

1. The Raylib window opens correctly.
2. The background is cleared each frame.
3. At least one shape is drawn on screen.
4. The window closes cleanly.
5. The program compiles and runs without errors.

## Manual test cases (checklist)

1. Run the program and verify that the window opens.
2. Confirm that the background color is visible.
3. Confirm that the shape or text appears on screen.
4. Close the window and verify the program exits normally.

## Exercise deliverables
This folder should contain:

1. README.md (this document + your final reflection).
2. main.cpp (exercise solution).
3. Optional: notes.md with setup decisions and observations.

## Optional extension (if you finish early)
Add a second shape, a different background color, or a simple text HUD showing the current frame rate.

## Final reflection (complete when done)
Answer briefly:

1. What part of the Raylib setup was hardest and why.
2. Which issue you found during testing.
3. What you would improve in version 2.
