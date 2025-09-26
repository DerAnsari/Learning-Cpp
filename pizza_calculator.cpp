#include <iostream>

using std::cin, std::cout;

int main() {
  int sizeNum;
  cout << "Enter the size (1-4)";
  cin >> sizeNum;
  int diameter{0}, price{0};
  switch (sizeNum) {
  case 1:
    diameter = 8;
    price = 750;
  case 2:
    diameter = 12;
    price = 1350;
  case 3:
    diameter = 16;
    price = 1600;
  case 4:
    diameter = 20;
    price = 2200;
  }
  double pizzaArea{3.143 * static_cast<double>(diameter)};

  double pricePersq{price / pizzaArea};

  cout << "Price per square inch of pizza: " << pricePersq;
  return 0;
}
