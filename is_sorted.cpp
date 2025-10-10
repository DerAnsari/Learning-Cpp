#include <iostream>
#include <iterator>

using std::cout;

int main() {
  int inputList[5]{1, 2, 3, 4, 5};
  int size = std::size(inputList);

  bool isSorted{true};
  for (int count{0}; count < size; count++) {
    cout << inputList[count] << inputList[count + 1] << std::endl;
    if (inputList[count] > inputList[count + 1]) {
      isSorted = false;
      cout << "It is Not sorted";
      break;
    }
  }
  if (isSorted) {
    cout << "It is Sorted";
  }
}
