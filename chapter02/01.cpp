// 题目：使用多种方法编写将两个字符串连接在一起的程序

#include <iostream>
#include <string>

using namespace std;

int main() {
  string str1 = "ab", str2 = "cd";
  cout << (str1 + str2) << endl;

  char * str3 = new char[str1.size() + str2.size()];
  copy(&str1[0], &str1[0] + str1.size(), str3);
  copy(&str2[0], &str2[0] + str2.size(), &str3[str1.size()]);

  cout << str3 << endl;
}


