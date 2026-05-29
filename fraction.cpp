#include <iostream>
#include <numeric>

struct Fraction {
  int num;
  int denom;
};

std::ostream &operator<<(std::ostream &output_stream,
                         const Fraction &fraction_value) {
  output_stream << fraction_value.num << "/" << fraction_value.denom;
  return output_stream;
}

void simplify(Fraction &fraction_value) {
  int commonDenom = std::gcd(fraction_value.num, fraction_value.denom);
  fraction_value = {fraction_value.num / commonDenom,
                    fraction_value.denom / commonDenom};
};

Fraction operator+(const Fraction &first_fraction,
                   const Fraction &second_fraction) {
  Fraction result = {first_fraction.num * second_fraction.denom +
                         second_fraction.num * first_fraction.denom,
                     first_fraction.denom * second_fraction.denom};
  simplify(result);
  return result;
};

void operator+=(Fraction &first_fraction, const Fraction &second_fraction) {
  first_fraction = {first_fraction + second_fraction};
};

Fraction operator*(const Fraction &first_fraction,
                   const Fraction &second_fraction) {
  Fraction result = {first_fraction.num * second_fraction.num,
                     second_fraction.denom * first_fraction.denom};
  simplify(result);
  return result;
};

void operator*=(Fraction &first_fraction, const Fraction &second_fraction) {
  first_fraction = {first_fraction * second_fraction};
};

bool operator==(const Fraction &first_fraction,
                const Fraction &second_fraction) {
  Fraction simplified1 = first_fraction;
  Fraction simplified2 = second_fraction;

  simplify(simplified1);
  simplify(simplified2);

  return simplified1.num == simplified2.num &&
         simplified1.denom == simplified2.denom;
}

int main() {
  // Test basic fraction creation and output
  Fraction firstFraction = {3, 4};
  Fraction secondFraction = {2, 5};

  std::cout << "First fraction: " << firstFraction << std::endl;
  std::cout << "Second fraction: " << secondFraction << std::endl;
  std::cout << std::endl;

  // Test addition
  Fraction sumResult = firstFraction + secondFraction;
  std::cout << firstFraction << " + " << secondFraction << " = " << sumResult
            << std::endl;

  // Test += operator
  Fraction accumulatedSum = {1, 2};
  std::cout << "Starting with: " << accumulatedSum << std::endl;
  accumulatedSum += firstFraction;
  std::cout << "After adding " << firstFraction << ": " << accumulatedSum
            << std::endl;
  std::cout << std::endl;

  // Test multiplication
  Fraction productResult = firstFraction * secondFraction;
  std::cout << firstFraction << " * " << secondFraction << " = "
            << productResult << std::endl;

  // Test *= operator
  Fraction accumulatedProduct = {2, 3};
  std::cout << "Starting with: " << accumulatedProduct << std::endl;
  accumulatedProduct *= firstFraction;
  std::cout << "After multiplying by " << firstFraction << ": "
            << accumulatedProduct << std::endl;
  std::cout << std::endl;

  // Test equality
  Fraction equivalentFraction = {6, 8}; // Same as 3/4
  std::cout << firstFraction << " == " << equivalentFraction << ": "
            << (firstFraction == equivalentFraction ? "true" : "false")
            << std::endl;
  std::cout << firstFraction << " == " << secondFraction << ": "
            << (firstFraction == secondFraction ? "true" : "false")
            << std::endl;
  std::cout << std::endl;

  // Test simplification
  Fraction unsimplifiedFraction = {12, 16};
  std::cout << "Before simplification: " << unsimplifiedFraction << std::endl;
  simplify(unsimplifiedFraction);
  std::cout << "After simplification: " << unsimplifiedFraction << std::endl;

  return 0;
}
