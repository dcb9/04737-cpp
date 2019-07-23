// 定义函数 up(ch)，如字符变量 ch 是小写字母就转换成大写字母并通过 up 返回，否则字符 ch 不改变。要求在矮小而完全的程序中显示这个程序是怎样被调用的。
#include <iostream>
using namespace std;

char up(char ch);

int main() {
  cout << up('c')
    << " " << up('C')
    << " " << up('h')
    << " " << up('H')
    << " " << up('i')
    << " " << up('I')
    << " " << up('n')
    << " " << up('N')
    << " " << up('a')
    << " " << up('A')
    << endl;
}

char up(char ch) {
  // 如果是小写字符，小写字母 ASCII 值从 97 到 122
  if (ch >= 97 and ch <= 122)
    // 小写字符与大写字符的差别就是：第6位二进制位为 0,其它完全一致，所以只需要通过与操作把第6位修改成 0 即可
    // a 01100001
    // A 01000001
    return ch & 0b11011111;
  return ch;
}
