// 编写一个求字符串长度的函数 strlen()，再用 strlen() 函数编写一个函数 revers(s) 的倒序递归程序，使字符串 s 逆序。

#include <iostream>
#include <string>

using namespace std;

int strlen(string);
string revers(string);

int main() {
  cout << strlen("Hello World!")
    << " "<< revers("Hello World!!")
    << endl;
}

string revers(string s) {
  int len = strlen(s), half = len / 2;

  char temp;
  for (int i = 0; i < half; i++) {
    temp = s[i];
    s[i] = s[len - 1 - i];
    s[len - 1 - i] = temp;
  }

  return s;
}

int strlen(string s) {
  int i = 0;
  for (;s[i] != '\0'; i++) { }
  return i;
}
