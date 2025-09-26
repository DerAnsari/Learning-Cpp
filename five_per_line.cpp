#include <iostream>

using std::cout, std::endl;

int main() {
  for (int count{1000}; count <= 2000; count++) {
    if (count % 5 == 0) {
      cout << endl;
    }
    cout << count << ", ";
  }
  return 0;
}
