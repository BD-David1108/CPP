#include <iostream>

int main() {
  // Declaring variables
  int year;
  int dig_no;

  // To take year input
  std::cout << "Enter the year: ";
  std::cin >> year;
  dig_no = std::to_string(year).length();

  // To evaluate and validate user input
  if (dig_no == 4){
    std::cout << "You have entered a valid year \n";
    // Evaluating input whether it's leap year or not
    if ( year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
      std::cout << "The year " << year << " is a leap year \n";
    }
    else {
      std::cout << "The year " << year << " is not a leap year \n";
    }
  }
  else {
    std::cout << "You have entered an invalid year input \n";
  }
}