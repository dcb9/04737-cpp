# include "RightTriangle.h" 
# include <iostream>
# include <cmath>

using namespace std;

RightTriangle::RightTriangle(double a, double b): Segment(a), h(b) {}

RightTriangle::RightTriangle(): Segment(0) {
  cout << "Please enter the lentgh of a side: ";
  cin >> l;

  cout << "Please enter the lentgh of an another side: ";
  cin >> h;
}

void RightTriangle::Display() {
  cout << "Right triangle width=" << l
    << " height=" << h
    << " hypotenums=" << sqrt(l * l + h * h)
    << endl;
}
