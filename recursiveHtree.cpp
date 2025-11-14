#include <raylib.h>

constexpr int HEIGHT = 1000;
constexpr int WIDTH = 1000;

void draw(int n, double size, double x, double y) {
  if (n == 0)
    return;

  double x0 = x - size / 2.0, x1 = x + size / 2.0;
  double y0 = y - size / 2.0, y1 = y + size / 2.0;

  DrawLine(x0 * WIDTH, y * HEIGHT, x1 * WIDTH, y * HEIGHT, BLACK);
  DrawLine(x * WIDTH, y0 * HEIGHT, x * WIDTH, y1 * HEIGHT, BLACK);

  draw(n - 1, size / 2.0, x0, y0);
  draw(n - 1, size / 2.0, x0, y1);
  draw(n - 1, size / 2.0, x1, y0);
  draw(n - 1, size / 2.0, x1, y1);
}

int main() {
  InitWindow(WIDTH, HEIGHT, "H Tree");

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(WHITE);
    draw(7, 0.5, 0.5, 0.5);
    EndDrawing();
  }

  CloseWindow();
}
