#include <iostream>

using std::cout, std::cin;

int main() {
  int speed{0};
  cout << "Enter the wind speed";
  cin >> speed;

  bool isHurrican;
  int category{0};
  if (speed >= 74) {
    isHurrican = true;
    if (speed <= 95) {
      category = 1;
    } else if (speed <= 110) {
      category = 2;
    } else if (speed <= 130) {
      category = 3;
    } else if (speed <= 155) {
      category = 4;
    } else {
      category = 5;
    }
  }

  if (isHurrican == true) {
    cout << "Yes, it is a Hurrican" << "of category: " << category;
  } else {
    cout << "No, it isn't a Hurrican";
  }
}
