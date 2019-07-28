# if ! defined(CIRCLE_H)
# define CIRCLE_H
# include "Point.h"

const double PI = 3.14;

class Circle: public Point {
  public:
    Circle(double, double);
    double Radius();
    double Area();
    void Display();
};

# endif
