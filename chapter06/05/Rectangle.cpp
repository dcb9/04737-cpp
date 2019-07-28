# include "Rectangle.h"
# include <iostream>

using namespace std;

Rectangle::Rectangle(double a, double b): RightTriangle(a, b) {}

Rectangle::Rectangle(): RightTriangle() { }

void Rectangle::Display() {
  cout << "Rectangle width=" << l
    << " height=" << h
    << " area=" << l * h
    << " perimeter=" << 2 * (l + h)
    << endl;
}

