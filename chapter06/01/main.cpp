// 设计一个基类，从基类派生圆，从圆派生圆柱，设计成员函数输出它们的面积和体积。
#include "Cylinder.h"

int main() {
  Cylinder c1 = Cylinder(10, 10, 3, 5);
  c1.Display();
}
