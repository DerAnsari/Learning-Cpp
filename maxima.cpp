#include <algorithm>
#include <vector>

int max(std::vector<int> a, int n) {
  if (n == 1)
    return a[0];
  int m = max(a, n - 1);
  return std::max(m, a[n - 1]);
}

int max(std::vector<int> a) { return max(a, a.size()); }
