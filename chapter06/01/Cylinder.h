#if ! defined(CYLINDER_H)
#define CYLINDER_H
#include "Circle.h"

class Cylinder: public Circle {
  protected:
    int h;
  public:
    Cylinder(int a, int b, int c, int d): Circle(a, b, c), h(d) {};
    double Area();
    double Volume();
    void Display();
};

#endif
