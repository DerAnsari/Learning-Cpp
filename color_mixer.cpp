#include <iostream>
using namespace std;

int main() {
  int r1, r2, g1, g2, b1, b2{0};
  cout << "Enter the first color RGB (0-255): ";
  cin >> r1 >> g1 >> b1;
  cout << "Enter the second color RGB (0-255): ";
  cin >> r2 >> g2 >> b2;

  // find mixed
  double mixedR{(r1 + r2) / 2.0};
  double mixedG{(g1 + g2) / 2.0};
  double mixedB{(b1 + b2) / 2.0};

  // find greyScale
  double firstGrey{0.299 * r1 + 0.587 * g1 + 0.114 * b1};
  double secondGrey{0.299 * r2 + 0.587 * g2 + 0.114 * b2};
  double mixedGrey{0.299 * mixedR + 0.587 * mixedG + 0.114 * mixedB};

  // output
  cout << "Mixed Color: " << "(" << static_cast<int>(mixedR) << ", "
       << static_cast<int>(mixedG) << ", " << static_cast<int>(mixedB)
       << ") \n";
  cout << "First Color greyScale: " << static_cast<int>(firstGrey);
  cout << "\n Second Color greyScale: " << static_cast<int>(secondGrey);
  cout << "\n Mixed Color greyScale: " << static_cast<int>(mixedGrey);
}
