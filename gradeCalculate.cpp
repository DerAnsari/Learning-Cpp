#include <iostream>
#include <string>

// Use the full namespace std for brevity in the example
using namespace std;

int main() {
  int grades{0};
  string extraCuricular{""}, goodBehavior{""}, result{""};

  cout << "Enter the Exam grades: ";
  cin >> grades;

  cout << "Did you participate in extraCuricular activities? ";
  cin >> extraCuricular;

  cout << "Did you have good behaviour during the term?  ";
  cin >> goodBehavior;

  // Apply bonuses only if the starting grade is less than 100
  if (grades < 100) {
    if (extraCuricular == "yes") {
      // Ensure grades doesn't exceed 100 after the first bonus
      grades = min(grades + 5, 100);
    }
    if (goodBehavior == "yes") {
      // Ensure grades doesn't exceed 100 after the second bonus
      grades = min(grades + 5, 100);
    }
  }

  // Replace the invalid switch statement with an IF-ELSE IF ladder
  if (grades >= 90) { // 90 to 100
    result = "A";
  } else if (grades >= 80) { // 80 to 89
    result = "-A";
  } else if (grades >= 70) { // 70 to 79
    result = "B";
  } else if (grades >= 60) { // 60 to 69
    result = "C";
  } else { // 59 and below
    // Note: I assumed the second "case <= 60" was meant to be for failing/lower
    // grades
    result = "D";
  }

  cout << "\nExam final Grade: " << grades << endl;
  cout << "your final grade is " << result << endl;
  return 0;
}
