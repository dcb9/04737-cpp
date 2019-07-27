// 编写一个程序，该程序建立一个动态数组，为动态数组的元素赋值，显示动态数组的值并删除动态数组

#include <iostream>

using namespace std;

// 一维
void d1() {
  int arr1Size = 5;
  int * arr1 = new int[arr1Size];
  for (int i=0; i<arr1Size; i++) {
    *(arr1+i) = i * i;
  }

  for (int i=0; i<arr1Size; i++) {
    cout << "arr1[" << i << "] = " << *(arr1+i) << endl;
  }

  delete []arr1;
}

// 二维
void d2() {
  int rowSize = 5;
  int colSize = 3;
  int ** arr = new int*[colSize]; // 指针数组
  for (int i = 0; i < colSize; i++) {
    arr[i] = new int[rowSize];
  }

  for (int i=0; i < colSize; i++) {
    for (int j = 0; j < rowSize; j++ ) {
      arr[i][j] = (i+1) * (j+1);
    }
  }

  for (int i=0; i < colSize; i++) {
    for (int j = 0; j < rowSize; j++ ) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {
  d1();
  d2();
}
