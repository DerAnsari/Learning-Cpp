#include <iostream>
#include <vector>
using std::vector, std::cout;

int max_span(vector<int> v) {
  if (v.empty()) {
    return 0;
  }

  int maxSpan = 0;

  for (int i = 0; i < static_cast<int>(v.size()); i++) {
    int value = v[static_cast<size_t>(i)];
    int rightmost = i;

    for (int j = i; j < static_cast<int>(v.size()); j++) {
      if (v[static_cast<size_t>(j)] == value) {
        rightmost = j;
      }
    }

    int span = rightmost - i + 1;
    if (span > maxSpan) {
      maxSpan = span;
    }
  }

  return maxSpan;
}

int main() {
  vector<int> v1{1, 2, 1, 1, 3};
  cout << max_span(v1) << std::endl; // should print 4
  vector<int> v2{1, 4, 2, 1, 4, 1, 4};
  cout << max_span(v2) << std::endl; // should print 6
  vector<int> v3{1, 4, 2, 1, 4, 4, 4};
  cout << max_span(v3) << std::endl; // should print 6

  return 0;
}
