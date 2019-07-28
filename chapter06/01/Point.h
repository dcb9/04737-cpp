# if !defined(POINT_H)
# define POINT_H

class Point {
  protected:
    int x, y;
  public:
    Point(int a, int b): x(a), y(b) {};
    void Display();
};

# endif
