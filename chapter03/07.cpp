// 利用函数模板设计一个求数组元素总和的函数，并验证之
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

int main() {
  double aa[5] = {1,2,3,4,5};
  cout << sum(aa, 5) << endl;
  cout << sum(aa, 5) << endl;
}
