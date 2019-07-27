// 声明复数的类 complex，使用友元函数 add 实现复数的加法。
#include <iostream>

using namespace std;

class complex {
  double a, b;

  public:
  complex(double x, double y): a(x), b(y) { }
  friend complex add(complex&, complex&);
  void dis();
};

void complex::dis() {
  cout << "complex number " << a << " + " << b << "i" << endl;
}

complex add(complex &a, complex &b) {
 return complex(a.a + b.a, a.b+b.b); 
}

int main() {
  complex c1 = complex(1, 2.5), c2 = complex(2, 3);
  c1.dis();
  c2.dis();
  complex c3 = add(c1, c2);
  c3.dis();
}
