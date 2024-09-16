#include <iostream>
// Little Mac is an interplanetary space boxer, who is trying to win championship belts for various weight categories on other planets within the solar system. This is a program to help him keep track of his target weight. 
int main() {
  
  //Declaring variables
  double earth_weight;
  double target_weight;
  int planet_no;
  double merc_grav = 0.38;
  double ven_grav = 0.91;
  double mar_grav = 0.38;
  double jup_grav = 2.34;
  double sat_grav = 1.06;
  double ura_grav = 0.92;
  double nep_grav = 1.19;

  //To ask input for earth weight
  std::cout << "Enter your Earth weight in kg: ";
  std::cin >> earth_weight;

  //To ask where planet he will fought
  std::cout << "Enter number for the planet destination: ";
  std::cin >> planet_no;

  //Conversion
  switch(planet_no) {
    case 1 :
    target_weight = earth_weight * merc_grav;
    std::cout << "Your weight on planet Mercury is " << target_weight << "\n";
    break; 
    case 2 :
    target_weight = earth_weight * ven_grav;
    std::cout << "Your weight on planet Venus is " << target_weight << "\n";
    break; 
    case 3 :
    target_weight = earth_weight * mar_grav;
    std::cout << "Your weight on planet Mars is " << target_weight << "\n";
    break; 
    case 4 :
    target_weight = earth_weight * jup_grav;
    std::cout << "Your weight on planet Jupiter is " << target_weight << "\n";
    break; 
    case 5 :
    target_weight = earth_weight * sat_grav;
    std::cout << "Your weight on planet Saturn is " << target_weight << "\n";
    break; 
    case 6 :
    target_weight = earth_weight * ura_grav;
    std::cout << "Your weight on planet Uranus is " << target_weight << "\n";
    break; 
    case 7 :
    target_weight = earth_weight * nep_grav;
    std::cout << "Your weight on planet Neptune is " << target_weight << "\n";
    break; 
  }
}