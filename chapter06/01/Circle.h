# if ! defined(CIRCLE_H)
# define CIRCLE_H
# include "Point.h"

const double PI = 3.14;

class Circle: public Point {
  protected:
    int r;
  public:
    Circle(int a, int b, int c): Point(a, b), r(c) {};
    double Area();
    void Display();
};

# endif
