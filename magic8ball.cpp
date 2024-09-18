#include <iostream>
#include <cstdlib>

int main() {
  // Your future is here
  std::cout << "MAGIC 8-BALL \n";

  // Declaring variable
  srand(time(NULL));
  int answer = std::rand() % 10;

  // Connecting fortune to numbers generated
  if (answer == 0) {
    std::cout << "It is certain";
  }
  else if (answer == 1) {
    std::cout << "You will get lucky tomorrow";
  }
  else if (answer == 2) {
    std::cout << "Your pants will not dry today";
  }
  else if (answer == 3) {
    std::cout << "Prepare to get your shoes dipped in poop";
  }
  else if (answer == 4) {
    std::cout << "You will have issues with your keyboard";
  }
  else if (answer == 5) {
    std::cout << "A celebrity will come pass around you";
  }
  else if (answer == 6) {
    std::cout << "It will rain tomorrow";
  }
  else if (answer == 7) {
    std::cout << "Your hands will sweat for no reason";
  }
  else if (answer == 8) {
    std::cout << "You will smell good without taking a bath today";
  }
  else if (answer == 9) {
    std::cout << "Money will find you";
  }
  else {
    std::cout << "Very doubtful";
  }
}