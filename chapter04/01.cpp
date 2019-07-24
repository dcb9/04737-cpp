// 设计一个点类 Point，再设计一个矩形类，矩形类使用 Point 类的两个坐标点作为矩形的对角顶点，并可以输出 4 个坐标点和面积。使用测试程序验证程序。
#include <iostream>

using namespace std;

class Point {
  int x, y;

  public:
    void Setx(int x1) { x = x1; };
    void Sety(int y1) { y = y1; };
    int Getx() { return x; };
    int Gety() { return y; };
    void Display() {
      cout << "(" << x << ", " << y << ")";
    }
};

class Rectangle {
  Point a, b;
  public:
  Rectangle(int x1, int y1, int x2, int y2) {
    a.Setx(x1);
    a.Sety(y1);
    b.Setx(x2);
    b.Sety(y2);
  }

  int Area();
  void Display();
};

int main() {
  Rectangle r = Rectangle(1, 2, 3, 4);
  r.Display();

  Rectangle r2 = Rectangle(1, -2, 3, 4);
  r2.Display();
}

int Rectangle::Area() {
  int area = (a.Getx() - b.Getx()) * (a.Gety() - b.Gety());
  if (area < 0) return -area;
  return area;
}

void Rectangle::Display() {
  Point c, d;
  c.Setx(b.Getx());
  c.Sety(a.Gety());
  d.Setx(a.Getx());
  d.Sety(b.Gety());
  cout << " point 1 = "; a.Display();
  cout << " point 2 = "; c.Display();
  cout << " point 3 = "; b.Display();
  cout << " point 4 = "; d.Display();

  cout << " area = " << Area() << endl;
}





