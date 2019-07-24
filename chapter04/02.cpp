// 使用内联函数设计一个类，用来表示直角坐票系统中的任意一条直线并输出它的属性。
#include <iostream>

class Line {
  double a, b;

  public:
    Line(){ }
    Line(double, double);

    void Display();

    void SetA(double a1) {
      a = a1;
    }

    void SetB(double b1) {
      b = b1;
    }
};

int main() {
  Line l;
  l.SetA(1);
  l.SetB(2);
  l.Display();
}

inline Line::Line(double a1, double b1) {
  SetA(a1);
  SetB(b1);
}

inline void Line::Display() {
  std::cout << "Line: y = " << a << "x + " << b << std::endl;
}
