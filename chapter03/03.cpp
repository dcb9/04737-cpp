// 编写主程序调用带实数 r 和整数 n 两个参数的函数并输出 r 的 n 次幂
#include <iostream>

double exp(double, int);
int main() {
  std::cout << exp(2.2, 2)
    << " " << exp(-5.5, 1)
    << " " << exp(-5.5, 4)
    << " " << exp(2, -2)
    << " " << exp(-2, 0)
    << std::endl;
}

double exp(double r, int e) {
  if (e == 0) return 1;

  if (e < 0) {
    r = 1 / r;
    e = -e;
  }

  double res = r;
  for ( int i = 1; i < e; i++ ) {
    res = res * r;
  }

  return res;
}
