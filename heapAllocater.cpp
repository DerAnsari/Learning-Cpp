#include <iostream>

// TODO: Implement create_int
int *create_int(int value) {
  int *newVal{new int};
  *newVal = value;

  return newVal;
}

int main() {
  int *my_int{create_int(42)};

  if (my_int != nullptr) {
    std::cout << "Value on heap: " << *my_int << std::endl;

    delete my_int;

    std::cout << "Memory freed." << std::endl;
  }

  return 0;
}
