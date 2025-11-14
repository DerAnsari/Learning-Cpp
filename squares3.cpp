#include <raylib.h>

constexpr int HEIGHT = 600;
constexpr int WIDTH = 600;

void draw(int n, double size, double x, double y) {
  if (n == 0)
    return;

  double x0 = x - size / 2.0, x1 = x + size / 2.0;
  double y0 = y - size / 2.0, y1 = y + size / 2.0;

  DrawRectangle(x0 * WIDTH, y0 * HEIGHT, size * WIDTH, size * HEIGHT, GRAY);
  DrawRectangleLines(x0 * WIDTH, y0 * HEIGHT, size * WIDTH, size * HEIGHT,
                     BLACK);

  draw(n - 1, size / 2.2, x0, y0);
  draw(n - 1, size / 2.2, x0, y1);
  draw(n - 1, size / 2.2, x1, y0);
  draw(n - 1, size / 2.2, x1, y1);
}

int main() {
  InitWindow(WIDTH, HEIGHT, "Recursive Squares");

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(WHITE);
    draw(5, 0.5, 0.5, 0.5);
    EndDrawing();
  }

  CloseWindow();
}
