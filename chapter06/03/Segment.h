# if !defined(SEGMENT_H)
# define SEGMENT_H

struct Point {
  int x, y;
};

class Segment {
  protected:
    Point start, end;
  public:
    Segment(int, int, int, int);
    void Display();
};

# endif
