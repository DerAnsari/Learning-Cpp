#include <iostream>
using namespace std;

int main() {
  int seconds;
  cout << "Enter the number of seconds: ";
  cin >> seconds;

  // calculating the time
  int minutes{seconds / 60};
  int remainingSec{seconds % 60};
  int hours{minutes / 60};
  int remainingMins{minutes % 60};
  int days{hours / 24};
  int remainingHr{hours % 24};

  // calculating the percentage
  // int totalYear{31557600};
  double year{(seconds / (365.25 * 84000)) * 100};

  // result
  cout << "Time: " << days << "Days, " << remainingHr << "Hours, "
       << remainingMins << "Minutes, " << remainingSec << "Seconds \n";
  cout << "This is " << year << "% of a year";
}
