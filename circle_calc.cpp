#include <cmath>
#include <iostream>
using namespace std;

int main() {
  float radius{0.0};
  cout << "Enter the radius";
  cin >> radius;

  // calculating the diamatere, circumference and area
  float pie{3.1425};
  float area{0.0};
  area = pie * pow(radius, 2.0);
  float diamater{0.0};
  diamater = radius * 2.0;
  float circumference{0.0};
  circumference = pie * diamater;

  // calculating the tiles
  float tiles{0.0};
  tiles = static_cast<int>(area);

  // result
  cout << " Diameter: " << diamater;
  cout << "\n circumference: " << circumference;
  cout << "\n Area: " << area;
  cout << "\n Whole tiles that fit" << tiles;
}
