/* Fizz Buzz is a classic developer question that is used to weed out 99.5% programming job candidates who cannot creatively use their coding knowledge to solve simple problems. Hence, this is my attempt to program it. The instruction is as follows: 

Write a fizzbuzz.cpp program that outputs numbers from 1 to 100.

But for multiples of 3, print Fizz instead of the number and for the multiples of 5, print Buzz. For numbers which are multiples of both 3 and 5 print, FizzBuzz.
*/

#include <iostream>

int main() {

  int i = 1;

  while (i <= 100){
    if (i % 3 == 0 && i % 5 != 0) {
      std::cout << "Fizz\n";
    }
    else if ( i % 5 == 0 && i % 3 != 0) {
      std::cout << "Buzz\n";
    }
    else if (i % 3 == 0 && i % 5 == 0) {
      std::cout << "Fizz Buzz \n";
    }
    else {
        std::cout << i << "\n";
    }
    i++;
  }
}