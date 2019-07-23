// 题目：编写一个求方程 a * x^2 + b * x + c = 0 的根的程序，用 3 个函数分别求当 b^2 - 4*a*c 大于 0 ，等于 0 和小于 0 时的方程的根。要求从主函数输入 a, b, c 的值并输出结果。
#include <iostream>
#include <cmath>

using namespace std;

int getRoot(double, double, double, double&, double&);

int main() {
  double root1 = 0, root2 = 0;
  int count = getRoot(3, 4, 1, root1, root2);

  cout 
    << "a = " << 3
    << " b = " << 4
    << " c = " << 1
    << " count: " << count
    << " root1: " << root1 
    << " root2: " << root2 << endl;
}

double oneRoot(double a, double b) {
  return ( 0 - b ) / ( 2 * a );
}

void twoRoots(double a, double b, double bSquaredMinus4ac, double& root1, double& root2) {
  root1 = ( -b + sqrt( bSquaredMinus4ac ) ) / ( 2 * a );
  root2 = ( -b - sqrt( bSquaredMinus4ac ) ) / ( 2 * a );
}

int getRoot(double a, double b, double c, double& root1, double& root2) {
  double res = b * b - 4 * a * c;

  // 小于 0 没有实数根
  if (res < 0) return 0;

  // 等于 0 有一个实数根
  if (res == 0) {
    root1=oneRoot(a, b);
    return 1;
  }

  // 大于 0 有两个实数根
  twoRoots(a, b, res, root1, root2);
  return 2;
}
