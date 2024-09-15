#include <iostream>
#include <cmath>

int main() {
  //Declared variables
  double a;
  double b;
  double c;
  double root1;
  double root2;

  // To get value for a
  std::cout <<"Enter a: ";
  std::cin >> a;
  // To get value for b
  std::cout <<"Enter b: ";
  std::cin >> b;
  // To get value for c
  std::cout <<"Enter c: ";
  std::cin >> c;

  root1 = (-b + std::sqrt(b*b - 4*a*c))/(2*a);
  root2 = (-b - std::sqrt(b*b - 4*a*c))/(2*a);

  std::cout << "Root 1 is " << root1 << "\n";
  std::cout << "Root 2 is " << root2 << "\n";
}