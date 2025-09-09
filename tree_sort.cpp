#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int val1, val2, val3;
  cout << "Enter Value 1";
  cin >> val1;
  cout << "Enter Value 2";
  cin >> val2;
  cout << "Enter Value 3";
  cin >> val3;

  int subLowest1, subLowest2, lowest;
  subLowest1 = min(val1, val2);
  subLowest2 = min(val1, val3);
  lowest = min(subLowest1, subLowest2);

  int submax1, submax2, maximum;
  submax1 = max(val1, val2);
  submax2 = max(val1, val3);
  maximum = max(submax1, submax2);

  int middle;
  middle = (val1 + val2 + val3) - lowest - maximum;

  cout << "here are the numbers in accending order\n";
  cout << lowest << middle << maximum;

  return 0;
}
