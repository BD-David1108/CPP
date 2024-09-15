#include <iostream>

int main() {
  //Declaring variables to store the amount per currency
  double pesos;
  double reais;
  double soles;
  double dollars;

  // To get input for pesos from user
  std::cout << "Enter number of Colombian Pesos:";
  std::cin >> pesos;
  
  // To get input for reais from user
  std::cout << "Enter number of Brazilian Reais:";
  std::cin >> reais;

  // To get input for soles from user
  std::cout << "Enter number of Peruvian Soles:";
  std::cin >> soles;

  // Conversion rate from colombian pesos to USD as of Sept. 16, 2024
  double conv_rate1 = 0.00024;
  // Conversion rate from brazilian reais to USD as of Sept. 16, 2024
  double conv_rate2 = 0.18;
  // Conversion rate from peruvian soles to USD as of Sept. 16, 2024
  double conv_rate3 = 0.26;

  // To sum the total amount converted to dollars
  dollars = (conv_rate1 * pesos) + (conv_rate2 * reais) + (conv_rate3 * soles);
  std::cout << "US Dollars = $" << dollars << "\n" ;


}