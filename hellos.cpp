#include <iostream>
#include <string>

using std::cout, std::cin, std::endl, std::string;

int main() {
  int num{0};
  cout << "Enter the Positive Integer";
  cin >> num;

  string word{"Hello"};
  for (int count{1}; count <= num; count++) {
    if ((count % 100 >= 11 && count % 100 <= 13)) {

      cout << count << "th " << word << "\n";

    } else {

      switch (count % 10) {
      case 1:
        cout << count << "st ";
        break;
      case 2:
        cout << count << "nd ";
        break;
      case 3:
        cout << count << "rd ";
        break;
      default:
        cout << count << "th ";
      }

      cout << word << endl;
    }
  }
  return 0;
}
