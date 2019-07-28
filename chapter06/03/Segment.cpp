# include "Segment.h"
# include <iostream>
# include <cmath>

using namespace std;

Segment::Segment(int a, int b, int c, int d) {
  start.x = a, start.y = b;
  end.x = c, end.y = d;
}

void Segment::Display() {

  double t = abs(double (start.y - end.y) / double (start.x - end.x));
  double r = atan(t);

  cout << "segment start point="
    << "(" << start.x << ", " << start.y << ")"
    << " end point=(" << end.x << ", " << end.y << ")"
    << " radians=" << r
    << endl;

}
