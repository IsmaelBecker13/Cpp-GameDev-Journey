# Cpp-GameDev-Journey
This repository is an collection of my personal learning journey in C++ game developmente, starting from the basics of C++ until advanced topics in game development. 
It includes code exercises and resources that I will be using to learn and improve my skills in C++ game development. The goal of this repository is to document my progress and share my learning experience with others who are interested in C++ game development.

Roadmap: Next, I will show the exercises and resources, applying orientated knowledge to learn C++ game development. These exercises will be orientated to different situations in the game development process, such as game mechanics, graphics, physics, and more. I will also include resources such as books, tutorials, and online courses that I will be using to learn C++ game development.

### Phase 1: C++ Basics & Core Logic (Console)
- [ ] **01_PlayerStats:** Create a basic Player struct/class with health, position, and movement logic. (Variables, Structs, Console I/O)
- [ ] **02_TextBattle:** Implement a turn-based combat system against an enemy. (Conditionals, Loops, RNG)
- [ ] **03_InventorySystem:** Build an inventory system to add/remove items. (Dynamic memory, Pointers, basic Data Structures)

### Phase 2: Modern C++14 & OOP for Games (Console)
- [ ] **04_GameLoop:** Implement the traditional game loop (`Input -> Update -> Render`) in the console using a simulated Delta Time.
- [ ] **05_EntitySystem:** Create a base `Entity` class and derived classes like `Player` and `Enemy`. (OOP, Inheritance, Polymorphism)
- [ ] **06_EnemySpawner:** Manage a wave of enemies using STL containers and Smart Pointers. (`std::vector`, `std::unique_ptr`, memory safety)
- [ ] **07_StateMenu:** Implement a Finite State Machine (FSM) to handle game states (Menu, Playing, Paused, Game Over).

### Phase 3: Entering the Graphical World (Raylib 2D)
- [ ] **08_HelloRaylib:** Set up a Raylib window, draw basic colored geometric shapes, and clear the background.
- [ ] **09_DeltaMovement:** Move a 2D shape using keyboard input and Delta Time to ensure frame-rate independent movement.
- [ ] **10_AABBCollision:** Implement Axis-Aligned Bounding Box (AABB) collision detection between the player and obstacles.
- [ ] **11_VectorMath:** Use 2D Vectors for proper normalized movement and basic chasing AI for an enemy.

### Phase 4: Going 3D (Raylib 3D)
- [ ] **12_FirstCamera3D:** Initialize a 3D environment, configure a basic 3D camera, and draw 3D primitives (cubes, spheres).
- [ ] **13_ModelLoader:** Load a 3D model (obj/gltf) and apply a basic texture.
- [ ] **14_FirstPersonController:** Implement a basic First-Person camera movement and rotation in a 3D space.
- [ ] **15_BoundingBoxes3D:** Handle 3D collisions using 3D Bounding Boxes to prevent the player from walking through walls.