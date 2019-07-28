# include "Point.h"
# include <cmath>

Point::Point(double a, double b): r(a), theta(b) {
  x = a * cos(b);
  y = r * sin(b);
}
