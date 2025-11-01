#include <iostream>
#include <vector>
using std::cout, std::endl, std::vector;

double percent_even(vector<int> v) {
  if (v.empty()) {
    return 0.0;
  }

  int even_count = 0;
  for (int n : v) {
    if (n % 2 == 0) {
      even_count++;
    }
  }

  double total_count = static_cast<double>(v.size());
  double percentage = (static_cast<double>(even_count) / total_count) * 100.0;
  return percentage;
}

int main() {
  vector<int> v1{6, 2, 9, 11, 3};
  cout << percent_even(v1) << endl;
  vector<int> v2{6, 2, 9, 11, 4};
  cout << percent_even(v2) << endl;
  vector<int> v3{1, 3, 5, 7, 9};
  cout << percent_even(v3) << endl;
  vector<int> v4{};
  cout << percent_even(v4) << endl;
  return 0;
}
