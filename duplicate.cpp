#include <iostream>
#include <iterator>
using namespace std;

int main() {
  int dataSet[10]{2, 5, 7, 1, 6, 8, 2, 5, 8, 2};
  int size = std::size(dataSet);
  bool hasDuplicate = false;

  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (dataSet[i] == dataSet[j]) {
        hasDuplicate = true;
        break;
      }
    }
    if (hasDuplicate)
      break;
  }

  cout << (hasDuplicate ? "true" : "false") << endl;
}
