// 定义一个线段类作为矩形类的基类，基类有起点和终点坐标，有输出坐标和长度以及线段和 x 轴的夹角的成员函数。矩形类用线段对象的两个坐标作为自己一条边的位置，它具有另外一个边长，能输出矩形的4个顶点坐标。给出类的定义并用程序验证它们的功能。
//
# include "Rectangle.h"

int main() {
  Rectangle r1 = Rectangle(1, 2, 3, 4, 5);
  r1.Display();
  r1.Segment::Display();
}
