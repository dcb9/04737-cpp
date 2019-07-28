// 基类是使用极坐标的点类，从它派生一个圆类，圆类用点类的坐标作为圆心，圆周通过极坐标原点，圆类有输出圆心直角坐标、圆半径和面积的成员函数。完成类的设计并验证之
# include "Circle.h"
# include <cmath>

int main() {
  Circle c1 = Circle(sqrt(2), PI/4);
  c1.Display();
}
