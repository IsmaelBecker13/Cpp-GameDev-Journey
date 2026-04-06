#include <raylib.h>
#include <raymath.h>
#include <vector>
#include <iostream>
using namespace std;
void DrawWorld(Camera3D camera)
    {
        // Floor 
        DrawPlane((Vector3){0,0,0}, (Vector2){100,100}, GRAY);

        /*
        cout << "Posicion: ("
        << camera.position.x << ", "
        << camera.position.y << ", "
        << camera.position.z << ")"
        << "Target: ("
        << camera.target.x << ", "
        << camera.target.y << ", "
        << camera.target.z << ")"    
        << "Forward: ("
        << forward.x << ", "
        << forward.y << ", "
        << forward.z << ")"      
        << "Forward + pos: ("
        << final.x << ", "
        << final.y << ", "
        << final.z << ")" << endl;   */

        // Camera Axis
        Vector3 forward = Vector3Subtract(camera.target, camera.position);          
        Vector3 pos =  Vector3Subtract(camera.position, {0,1,0});
        Vector3 forw = Vector3Subtract(forward, {0,1,0});
        Vector3 final = Vector3Add(pos, forw);
      
        DrawCylinderWiresEx(pos,final,0.01,0.01,8,RED); 

        DrawCylinderWiresEx({0,0,0},{10,0,0},0.01,0.01,8,RED); // x axis
        DrawCylinderWiresEx({0,0,0},{0,10,0},0.01,0.01,8,GREEN); // y axis
        DrawCylinderWiresEx({0,0,0},{0,0,10},0.001,0.001,8,BLUE); // z axis
        /*
        DrawCube((Vector3){5,10,0}, 5.0, 5.0, 10.0, RED);
        DrawCube((Vector3){10,5,0}, 5.0, 5.0, 10.0, RED);
        DrawCube((Vector3){15,25,0}, 5.0, 5.0, 10.0, RED);
        DrawCube((Vector3){5,25,0}, 5.0, 5.0, 10.0, RED);*/
    }

int main()
    {
        Camera3D camera = { 0 };
        camera.position = { -10.0f, 4.0f, -10.0f }; // Eyes height aprox
        camera.target = {10.0f, 4.0f, 10.0f}; // Point to Watch (down on this case)
        camera.up = {0.0f, 1.0f, 0.0f}; // Up Vector, Y is up
        camera.fovy = 75.0f; // View Field in degrees
        camera.projection = CAMERA_PERSPECTIVE; // No ortographic
        float mouseSensitivity = 1.003f;
        float moveSpeed = 5.0f;

        SetConfigFlags(FLAG_WINDOW_RESIZABLE | FLAG_MSAA_4X_HINT | FLAG_VSYNC_HINT);
        InitWindow(1366, 768, "Mi first 3d game");
        DisableCursor();
        SetTargetFPS(60);
        if (IsWindowReady())
            {
                while(!WindowShouldClose())
                    {
                        // Logic
                        float dt = GetFrameTime();
                        Vector2 mouseRotation = GetMouseDelta();


                        // Inputs
                        int hmov = IsKeyDown(KEY_D) - IsKeyDown(KEY_A);
                        int vmov = IsKeyDown(KEY_W) - IsKeyDown(KEY_S);
                        //if (hmov != 0)
                        //    cout<<"hmov: "<<hmov<<" - Moving in y axis"<<endl;
                        //if (vmov != 0)
                        //    cout<<"vmov: "<<vmov<<" - Moving in x axis"<<endl;


                        Vector3 movement = {vmov * moveSpeed * dt,  hmov * moveSpeed * dt, 0.0f}; // X back/forward - Y left/right - Z up/down
                        Vector3 rotation = {0.0f, 0.0f, 0.0f};
                        UpdateCameraPro(&camera, movement, rotation, 0.0f);
                        // Render
                        BeginDrawing();
                            ClearBackground(WHITE);
                            BeginMode3D(camera);
                                DrawWorld(camera);
                            EndMode3D();

                        EndDrawing();
                    }
            }
        CloseWindow();
        return 0;
    }