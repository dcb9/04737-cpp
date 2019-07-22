// 已知一个 string 的对象 str 的内容为 "We are here!"，使用多种方法输出字符“h”.
#include <iostream>
#include <string>
using namespace std;

int main() {
  string str = "We are here!";
  
  int i = str.find("h");
  cout << "Using str.find(\"h\") to get it: " << str[i] << endl;

  cout << "Using str.substr(7, 1) to get it: " << str.substr(7, 1) << endl;

  cout << "Using *find(&str[0], &str[0] + str.size(), 'h') to get it: " << *find(&str[0], &str[0] + str.size(), 'h') << endl;

  return 0;
}
