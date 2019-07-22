#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int a[ ] = {1, 2, 3, 4, 5, 6, 7, 8}, b[8];

  // 先找出 4 的位置
  int * x = find (a, a + 8, 4);
  if (x == a + 8) {
    cout << "未找到 4 所在的位置" << endl; 
    return 1;
  }

  cout << "4 所在的位置为：" << x << endl;

  // 将数组 a 复制给数组b 
  copy(a, a + 8, b);

  // 将数组 a 的内容反转
  reverse(a, a + 8);
  // 再查找 4 的位置
  int * xx = find (a, a + 8, 4);
  if (xx == a + 8) {
    cout << "未找到 4 所在的位置" << endl; 
    return 1;
  }

  cout << "4 所在的位置为：" << xx << endl;
  // 最后分别输出数组 a 和 b 的内容

  cout << "a[ ] = ";
  copy(a, a + 8, ostream_iterator<int>( cout, " " ));
  cout << endl;

  cout << "b[ ] = ";
  copy(b, b + 8, ostream_iterator<int>( cout, " " ));
  cout << endl;

  return 0;
}
