# include "Circle.h"
# include <iostream>

using namespace std;

Circle::Circle(double a, double b): Point(a, b) { }

double Circle::Radius() { return r; }

double Circle::Area() { return PI * r * r; }

void Circle::Display() {
  cout
    << "Circle center point: " << "(" << x << ", " << y << ")"
    << " Radius: " << Radius()
    << " Area: " << Area()
    << endl;
}
