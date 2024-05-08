#include <vector>
#include <iostream>

using namespace std;
int main()
{
  vector<int> vec = {1, 2, 3, 4};
  vec.push_back(5);
  for (char i = 0; i < vec.size(); i++) {
    cout << vec[i] << endl;
  }
  cout << "容量：" << vec.capacity() << endl;
  return 0;
}
