// 编写有字符型参数 C 和整型参数 N 的函数，让它显示出由字符 C 组成的三角形。其方式为第 1 行有 1 个字符 C，第 2 行有 2 个字符 C 等等
#include <iostream>

using namespace std;

void trig(char, int);

int main() {
  trig('A', 2);
  trig('B', 3);
  trig('C', 5);
}

void trig(char C, int L) {
  for (int i = 0; i < L ; i++)  {
    for (int j = 0; j <= i; j++) {
      cout << C;
    }
    cout << endl;
  }
}
