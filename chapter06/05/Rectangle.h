# if ! defined(RECTANGLE_H)
# define RECTANGLE_H
# include "RightTriangle.h"

class Rectangle: public RightTriangle {
  public:
    Rectangle();
    Rectangle(double, double);
    void Display();
};

# endif
