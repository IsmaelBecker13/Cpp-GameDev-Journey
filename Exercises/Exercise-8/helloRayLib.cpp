#include <iostream>
#include <raylib.h>
# include <ctime>

using namespace std;
int main()
{
	
	InitWindow(1366, 768, "My first game - v1.0");
	SetTargetFPS(60);
	float update_period = 1.0; // seconds
	float timer = 0.0;
	SetRandomSeed(time(NULL));
	
	int x = GetRandomValue(0, GetScreenWidth());
	int y = GetRandomValue(0, GetScreenHeight());
	int xx = GetRandomValue(0, GetScreenWidth());
	int yy = GetRandomValue(0, GetScreenHeight());	

	if (IsWindowReady())
		{
			while (!WindowShouldClose())
				{
					float dt = GetFrameTime();
					timer += dt;
					cout << "delta time: " << dt << " - timer: "<<timer<<endl;
					if (timer >= update_period)
						{
							// Alarm Event
							timer = 0;
							// Do something...
							x = GetRandomValue(0, GetScreenWidth());
							y = GetRandomValue(0, GetScreenHeight());
							xx = GetRandomValue(0, GetScreenWidth());
							yy = GetRandomValue(0, GetScreenHeight());								
						}
					
					BeginDrawing();
					ClearBackground(BLACK);
					DrawCircle(x, y, 100, RED);
					DrawText("Are you Ready Valve?, your father is coming!!!", xx, yy, 20, WHITE);
					EndDrawing();
				}
		}
	CloseWindow();
	return 0;
}