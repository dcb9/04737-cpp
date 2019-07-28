// 设计一个线段基类，当创建无参数对象时，才要求用户输入长度。同样，其派生的直角三角形类也是在产生对象时要求输入两个直角边的长度。直角三角形再派生矩形类，矩形类的参数也由键盘输入。设计这些类并测试它们的功能。

# include "Rectangle.h"
# include "RightTriangle.h"
# include "Segment.h"

int main() {
  Rectangle r1 = Rectangle(3, 4);
  r1.Display();
  r1.RightTriangle::Display();
  r1.Segment::Display();

  Rectangle r2 = Rectangle();
  r2.Display();

  RightTriangle rt1 = r2;
  rt1.Display();

  Segment s1 = r2;
  s1.Display();
}
