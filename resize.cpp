#include <cstddef>
#include <iostream>

// TODO: Implement resize_array
int *resize_array(int *old_array, std::size_t old_size, std::size_t new_size) {
  // 1. Allocate new array
  int *new_array = new int[new_size];
  // 2. Copy data
  std::size_t elements_to_copy = std::min(old_size, new_size);
  // 3. Initialize new space (if any)
  for (std::size_t i = 0; i < elements_to_copy; ++i) {
    new_array[i] = old_array[i];
  }
  // 4. Delete old array
  if (new_size > old_size) {
    for (std::size_t i = old_size; i < new_size; ++i) {
      new_array[i] = 0;
    }
  }
  // 5. Return new array
  if (old_array != nullptr) {
    delete[] old_array;
  }

  return new_array;
}

int main() {
  std::size_t size{5};
  int *arr{new int[size]};

  for (std::size_t i{0}; i < size; i++) {
    arr[i] = i * 10;
  }

  std::cout << "Original array: ";
  for (std::size_t i{0}; i < size; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  // Resize to 8
  arr = resize_array(arr, size, 8);
  size = 8;

  std::cout << "Resized array:  ";
  for (std::size_t i{0}; i < size; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  delete[] arr;
  return 0;
}
