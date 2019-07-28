# if ! defined(RIGHT_TRIANGLE_H)
# define RIGHT_TRIANGLE_H
# include "Segment.h"

class RightTriangle: public Segment {
  protected:
    double h;
  public:
    RightTriangle();
    RightTriangle(double, double);
    void Display();
};

# endif
