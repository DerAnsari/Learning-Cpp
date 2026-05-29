#include <iostream>

struct Vector2D {
  double x;
  double y;
};

Vector2D add(const Vector2D &first_vector, const Vector2D &second_vector) {
  return {first_vector.x + second_vector.x, first_vector.y + second_vector.y};
};

Vector2D operator+(const Vector2D &first_vector,
                   const Vector2D &second_vector) {
  return {first_vector.x + second_vector.x, first_vector.y + second_vector.y};
};

Vector2D operator*(const Vector2D &input_vector, double scalar_value) {
  return {input_vector.x * scalar_value, input_vector.y * scalar_value};
};

void operator*=(Vector2D &input_vector, double scalar_value) {
  input_vector = {input_vector.x * scalar_value, input_vector.y * scalar_value};
};

double dot(const Vector2D &first_vector, const Vector2D &second_vector) {
  return first_vector.x * second_vector.x + first_vector.y * second_vector.y;
};

std::ostream &operator<<(std::ostream &output_stream,
                         const Vector2D &vector_value) {
  output_stream << "(" << vector_value.x << "," << vector_value.y << ")";
  return output_stream;
};

int main() {
  Vector2D vector_one{1.2, 3.4};
  std::cout << "vector_one: " << vector_one << "\n";

  Vector2D vector_two{5.6, 7.8};
  std::cout << "vector_two: " << vector_two << "\n";

  auto sum_vector{add(vector_one, vector_two)};
  std::cout << "sum_vector=add(vector_one,vector_two): " << sum_vector << "\n";

  auto operator_sum{vector_one + vector_two};
  std::cout << "operator_sum=vector_one+vector_two: " << operator_sum << "\n";

  auto scaled_vector{vector_one * 2.0};
  std::cout << "scaled_vector: " << scaled_vector << "\n";

  vector_one *= 2.0;
  std::cout << "vector_one*=2.0: " << vector_one << "\n";

  auto dot_product{dot(vector_one, vector_two)};
  std::cout << "dot(vector_one,vector_two): " << dot_product << "\n";
}
