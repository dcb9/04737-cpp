// 定义一个 Dog 类，它用静态数据成员 Dogs 记录 Dog 的个体数目。静态成员函数 GetDogs 用来存取 Dogs。设计并测试这个类。
//

#include <iostream>

using namespace std;

class Dog {
  static int Dogs;
  public:
    Dog();
    static int GetDogs();
};

int Dog::Dogs = 0;

Dog::Dog() {
  ++Dogs;
}

int Dog::GetDogs() {
  return Dogs;
}

int main() {
  Dog * dogs = new Dog[100];
  Dog * dogs2 = new Dog[200];

  cout << "Dogs = " << dogs->GetDogs() << endl;
}
