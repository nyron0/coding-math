#include <stdlib.h>
#include <time.h>

#include "raylib.h"

int main(void) {
	//srand(time(NULL));
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);   // must come before InitWindow
    InitWindow(800, 600, "Canvas");
    SetTargetFPS(60);
    MaximizeWindow();

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);


        for(int i=0;i<100;i++)
	{

	}
	DrawLine(100, 100, 400, 300, BLACK);
	DrawFPS(10, 10);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
