#include <iostream>
#include <iterator>
using std::cout, std::endl;

int main() {
  int binaryArray[8]{1, 0, 0, 1, 1, 1, 1, 0};
  int size = std::size(binaryArray);

  int Count = 0, maxCount = 0;

  for (int i = 0; i < size; i++) {
    if (binaryArray[i] == 1) {
      Count++;
      if (Count > maxCount) {
        maxCount = Count;
      }
    } else {
      Count = 0;
    }
  }

  cout << "Max consecutive 1's: " << maxCount << endl;
}
