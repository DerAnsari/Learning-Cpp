#include <iostream>
#include <vector>

int mean(std::vector<int> a, std::size_t start, std::size_t end) {
  int sum{0};
  for (std::size_t i = start; i < end; ++i) {
    sum += a[i];
  }
  int result = sum / static_cast<int>(end - start);
  return result;
}

int scores_mean(std::vector<int> scores) {
  std::size_t length = scores.size();
  std::size_t mid = length / 2;

  int firstMean = mean(scores, 0, mid);
  int secondMean = mean(scores, 0, mid);

  if (firstMean > secondMean) {
    return firstMean;
  } else {
    return secondMean;
  }
}

int main() {
  std::vector<int> scores = {3, 4, 5, 1, 2, 3};
  int result = scores_mean(scores);
  std::cout << "Larger mean: " << result << "\n";

  return 0;
}
