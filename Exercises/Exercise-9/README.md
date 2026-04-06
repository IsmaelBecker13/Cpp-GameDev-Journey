# Exercise 9 - Basic 3D Scene (Raylib)

## Context
This exercise is your first real step into 3D using Raylib. The goal is to build a minimal 3D scene and learn the essential rendering flow: camera setup, 3D drawing mode, and basic world objects.

You should keep this exercise simple and focused. No shooting, no enemies, no physics yet.

## Learning goals
By the end of this exercise, you should be able to:

1. Configure and use a `Camera3D`.
2. Switch between 2D and 3D drawing modes with `BeginMode3D()` and `EndMode3D()`.
3. Render a basic 3D world (floor + cubes).
4. Move the camera with keyboard/mouse.
5. Keep a clean and readable real-time game loop.

## Main assignment
Implement a C++ program with Raylib that opens a window and renders a basic 3D scene.

The scene must include at minimum:

1. A visible floor/ground plane.
2. At least 3 cubes at different positions.
3. A controllable 3D camera.
4. A clean render loop and clean exit.

## Mandatory functional requirements

### 1) Window and lifecycle
Rules:

1. Call `InitWindow()` before rendering.
2. Use a clear window title for the exercise.
3. Call `CloseWindow()` when the app exits.
4. Program must close without freezing/crashing.

### 2) Camera setup
Rules:

1. Use `Camera3D` with valid position, target, up, fovy, and projection.
2. Update camera every frame (manual input or Raylib helper).
3. Camera movement must feel responsive and stable.

### 3) 3D rendering flow
Required loop structure per frame:

1. Update logic/input.
2. `BeginDrawing()`.
3. `ClearBackground()`.
4. `BeginMode3D(camera)`.
5. Draw 3D objects.
6. `EndMode3D()`.
7. Optional 2D HUD text.
8. `EndDrawing()`.

Rules:

1. All 3D draws must happen between `BeginMode3D()` and `EndMode3D()`.
2. Background must be cleared every frame.

### 4) Scene content
Rules:

1. Draw a floor plane (or equivalent ground reference).
2. Draw at least 3 cubes with visible size and spacing.
3. Objects must remain visible while camera moves.
4. Use colors that are clearly visible.

## Technical requirements

1. Language: C++14 or higher.
2. Library: Raylib.
3. Code must compile without errors.
4. Keep architecture minimal and readable.
5. Avoid unnecessary global state.

## Quality criteria

1. Clear variable names (`camera`, `cubePositions`, etc.).
2. Consistent frame update order.
3. No duplicated rendering code when avoidable.
4. Reasonable constants for sizes/positions.

## Definition of done
Exercise is complete only when all are true:

1. Window opens correctly.
2. Camera can move in the 3D scene.
3. Floor and at least 3 cubes render correctly.
4. Rendering loop structure is correct every frame.
5. Program closes cleanly.
6. Program compiles and runs with no errors.

## Manual test checklist

1. Run the program and confirm window opens.
2. Confirm floor and cubes are visible.
3. Move camera and verify perspective changes correctly.
4. Ensure no flicker or rendering outside 3D mode.
5. Close window and confirm normal exit.

## Deliverables
This folder should contain:

1. `README.md` (this document + your final reflection).
2. `main.cpp` (or your chosen source file with the solution).
3. Optional: `notes.md` with setup notes.

## Optional extension (if you finish early)

1. Add a grid with `DrawGrid()`.
2. Add a simple HUD (FPS or camera position).
3. Add one moving cube using `sin()` over time.

## Final reflection (complete when done)
Answer briefly:

1. What was hardest in your first 3D setup and why.
2. What bug or issue appeared during testing.
3. What you would improve for Exercise 10.
