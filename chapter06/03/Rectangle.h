# if !defined(RECTANGLE_H)
# define RECTANGLE_H
# include "Segment.h"

class Rectangle: public Segment {
  protected:
    int l;
  public:
    Rectangle(int a, int b, int c, int d, int e): Segment(a, b, c, d), l(e) {};
    void Display();
};

# endif
