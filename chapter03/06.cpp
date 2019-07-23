// 用函数模板实现 3 个数值中按最小值到最大值排序的程序
#include <iostream>

using namespace std;

template <class T>
void sort(T a[3]) {
  T temp;
  for (int i = 0; i < 2; i++) {
    for (int j = i+1; j < 3; j++) {
      if (a[i] > a[j]) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}

int main() {
  int a[3] = {3,2,1};
  sort(a);
  for (int i = 0; i < 3; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}
