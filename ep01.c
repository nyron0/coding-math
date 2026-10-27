#include "raylib.h"

int main(void) {
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);   // must come before InitWindow
    InitWindow(800, 600, "Canvas");
    SetTargetFPS(60);
    MaximizeWindow();

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

	Rectangle rect = { 200.0f, 150.0f, 400.0f, 300.0f };

        DrawLine(100, 100, 400, 300, BLACK);
        DrawRectangleRec(rect, BLUE);
        DrawRectangleLinesEx(rect, 5, RED); 
	DrawFPS(10, 10);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
