#include "vector.cpp"
#include <cstdlib>
#include <ctime>
#define HEIGHT 20
#define WIDTH 70

char screen[HEIGHT][WIDTH];

// sebagai obstacle
struct Obstacle {
  Vector2D position;
  bool isBroken;
  char symbol;
};

void setObstacleCoordinate(Obstacle *o, double x, double y) {
  o->position.x = x;
  o->position.y = y;
  o->symbol = '#';
}

void randomPosition(Vector2D position) {
  int minX = 45;
  int maxX = 69;
}
