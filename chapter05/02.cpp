// 设计一个使用常量成员函数的示范程序
#include <iostream>
using namespace std;

class test {
  int a;
  public:
    test(int x): a(x) {}
    void show() const;
};

void test::show() const {
  // a = 2; // 这句如果执行的话会报错，因为 const 成员函数不能更新数据成员
  cout << "a = " << a << endl;
}


int main() {
  test t1 = 1;
  t1.show();
}
