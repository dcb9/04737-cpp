// 利用函数模板设计一个求数组元素总和的函数，并验证之
// 重载上题中的函数模板，使它能够进行两个数组的求和
#include <iostream>
using namespace std;

template < class T >
T sum(T a[], int c) {
  T s = 0;
  for (int i =0; i < c; i++) {
    s = s + a[i];
  }
  return s;
}

template < class T >
T sum(T a[], int ac, T b[], int bc) {
  return sum(a, ac) + sum(b, bc);
}

int main() {
  double a[2] = {2,6};
  double b[3] = {1,2,4};

  cout << sum(a, 2, b, 3) << endl;
}
