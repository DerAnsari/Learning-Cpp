#include <iostream>
#include <vector>
using std::cout, std::endl, std::vector;

bool vector_eq(vector<int> v1, vector<int> v2) {
  if (v1.size() != v2.size()) {
    return false;
  }

  for (size_t i = 0; i < v1.size(); i++) {
    if (v1[i] != v2[i]) {
      return false;
    }
  }

  return true;
}

int main() {
  vector<int> v1{1, 2, 3, 4, 5};
  vector<int> v2{1, 2, 3, 4, 5};
  cout << (vector_eq(v1, v2) ? "true" : "false") << endl;

  return 0;
}
