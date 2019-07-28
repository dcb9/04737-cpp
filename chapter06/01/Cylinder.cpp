#include "Cylinder.h"
#include <iostream>

using namespace std;

double Cylinder::Area() {
  return ( 2 * PI * r ) * h + Circle::Area() * 2;
}

double Cylinder::Volume() {
  return Circle::Area() * h;
}

void Cylinder::Display() {
  cout << "Cylinder: ";
  Circle::Display();
  cout
    << " height=" << h
    << " Area=" << Area()
    << " Volume=" << Volume()
    << endl;
}

