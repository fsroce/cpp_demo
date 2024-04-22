#include <iostream>
#include <string>
using namespace std;
int main () {
  // basic c
  char c1 = 'yes';// 语法正确 编译器会进行截断，具体截断规则由编译器决定
  cout << c1 << endl;
  // char c2 = "yes";// 语法错误 字符类型不能用于承载字符串
  const char *slash = "/";// 语法正确 将字符串地址赋值给指针
  cout << slash << endl;
  // const char *slash2 = '/';// 语法错误 将字符赋值给指针

  // cpp
  string s1(1, 'yes'); // s
  cout << s1 << endl;
  string s2(3, 'yes'); // sss
  cout << s2 << endl;
  string s3(1, 'y'); // y
  cout << s3 << endl;
  string s4("/"); // /
  cout << s4 << endl;
  string s5(1, '/'); // /
  cout << s5 << endl;
  string s6("yes"); // yes
  cout << s6 << endl;
  return 0;
}