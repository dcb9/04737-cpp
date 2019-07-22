#include <iostream>
#include <algorithm>

using namespace std;

const int NUM = 5;

float sum(float, float);

int main() {
  float * f = new float[NUM];
  cout << "Please enter " << NUM << " float numbers: ";
  for (int i = 0; i < NUM; i++) {
    cin >> *(f + i);
  }

  float s = *f;

  for (int i = 1; i < NUM; i++) {
    s = sum(s, *(f+i));
  }

  cout << "Sum = " << s << endl;

  cout << "Min = "<< *min_element(f, f + NUM) << endl;

  return 0;
}

float sum(float a1, float a2) {
  return a1 + a2;
}
