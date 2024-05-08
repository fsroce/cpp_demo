#include <iostream>
using namespace std;
// cpp中的强制类型转换问题
int main () {
  int arr[] = {1, 2, 3};
  int threshold = -1;
  if (sizeof(arr) / sizeof(arr[0]) > threshold) {
    cout << "positive number array" << endl;
  } else {
    cout << "negative number array" << endl;
  }
  // 发现打印negative number array
  // 因为sizeof返回一个无符号整数，存在类型转换将-1转化为无符号数
  int size = sizeof(arr) / sizeof(arr[0]);
  // 比较int和int类型不会存在问题
  cout << (size < threshold) << endl;
  cout << (0.1 + 0.2 == 0.3) << endl;
  return 0;
}