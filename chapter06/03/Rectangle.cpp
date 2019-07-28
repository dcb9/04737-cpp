# include <iostream>
# include "Rectangle.h"

using namespace std;

void Rectangle::Display() {
  cout << "point1=(" << start.x << ", " << start.y << ")"
    << " point2=(" << end.x << ", " << end.y << ")"
    << " point3=(" << start.x << ", " << start.y - l << ")"
    << " point4=(" << end.x << ", " << end.y - l << ")"
    << endl;
}
