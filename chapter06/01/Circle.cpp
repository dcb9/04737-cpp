#include "Circle.h"
#include <iostream>

using namespace std;

double Circle::Area() {
  return PI * double(r) * double(r);  
}

void Circle::Display() {
  cout << "Circle point: ";
  Point::Display();
  cout << " radius=" << r;
}
