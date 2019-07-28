# include "Segment.h"
# include <iostream>

using namespace std;

Segment::Segment(double a): l(a) {}

Segment::Segment() {
  cout << "Please enter the lentgh of a line segment: ";
  cin >> l;
}

void Segment::Display() {
  cout << "Line segment length = " << l << endl;
}
