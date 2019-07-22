#include <iostream>

using namespace std;

int main() {
  int * n = new int[100];
  
  for (int i = 0; i < 100; i ++) {
    *(n + i) = i;
  }

  for (int i = 0; i < 100; i ++) {
    cout << (n+i) << " = " << *(n+i) << endl;
  }

  return 0;
}
