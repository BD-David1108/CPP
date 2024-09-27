/* 
Rock Paper Scissors Lizards Spock 
(The Big Bang Theory)
*/

#include <iostream>
#include <stdlib.h>
#include <string>

int main () {
  // Live long and prosper

  srand (time(NULL));
    
  int computer = rand() % 5 + 1;

  int user = 0;
  std::string user_decision;
  std::string comp_decision;

  // Prompt user to select choice

  std::cout << "====================\n";
  std::cout << "Rock Paper Scissors Lizard Spock!\n";
  std::cout << "====================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cout << "4) 🦎\n";
  std::cout << "5) 🧑\n";

  std::cout << "shoot! \n";

  // To get user input and map the value respectively

  std::cin >> user;
  if (user == 1) {
    user_decision = "Rock";
  }
  else if (user == 2) {
    user_decision = "Paper";
  }
  else if (user == 3) {
    user_decision = "Scissor";
  }
  else if (user == 4) {
    user_decision = "Lizard";
  }
  else if (user == 5) {
    user_decision = "Spock";
  }

  // To map computer input and map values

  if (computer == 1) {
    comp_decision = "Rock";
  }
  else if (computer == 2) {
    comp_decision = "Paper";
  }
  else if (computer == 3) {
    comp_decision = "Scissor";
  }
  else if (computer == 4) {
    comp_decision = "Lizard";
  }
  else if (computer == 5) {
    comp_decision = "Spock";
  }

  // To inform user of his/her decision and the computer's decision
  std::cout << "====================\n";
  std::cout << "You chose " << user_decision << "\n";
  std::cout << "Computer chose " << comp_decision << "\n";

  // To evaluate and inform who's the winner
  // For rock event

  if (user_decision == "Rock" && comp_decision == "Rock") {
    std::cout << "====================\n";
    std::cout << "DRAW!!!\n";
  }
  else if (user_decision == "Rock" && comp_decision == "Scissor") {
    std::cout << "====================\n";
    std::cout << "YOU WIN!!!\n"; 
  }
  else if (user_decision == "Rock" && comp_decision == "Paper") {
    std::cout << "====================\n";
    std::cout << "YOU LOSE!!!\n"; 
  } 
  else if (user_decision == "Rock" && comp_decision == "Lizard") {
    std::cout << "====================\n";
    std::cout << "YOU CRUSHED THE LIZARD! YOU WIN!!!\n"; 
  }
  else if (user_decision == "Rock" && comp_decision == "Spock") {
    std::cout << "====================\n";
    std::cout << "YOU HAVE BEEN VAPORIZED! YOU LOSE!!!\n"; 
  } 

  // For paper event

  if (user_decision == "Paper" && comp_decision == "Rock") {
    std::cout << "====================\n";
    std::cout << "YOU WIN!!!\n";
  }
  else if (user_decision == "Paper" && comp_decision == "Scissor") {
    std::cout << "====================\n";
    std::cout << "YOU LOSE!!!\n"; 
  }
  else if (user_decision == "Paper" && comp_decision == "Paper") {
    std::cout << "====================\n";
    std::cout << "DRAW!!!\n"; 
  } 
  else if (user_decision == "Paper" && comp_decision == "Lizard") {
    std::cout << "====================\n";
    std::cout << "YOU HAVE BEEN EATEN! YOU LOSE!!!\n"; 
  }
  else if (user_decision == "Paper" && comp_decision == "Spock") {
    std::cout << "====================\n";
    std::cout << "YOU DISPROVED SPOCK! YOU WIN!!!\n"; 
  } 

  // For scissor event

  if (user_decision == "Scissor" && comp_decision == "Rock") {
    std::cout << "====================\n";
    std::cout << "YOU LOSE!!!\n";
  }
  else if (user_decision == "Scissor" && comp_decision == "Scissor") {
    std::cout << "====================\n";
    std::cout << "DRAW!!!\n"; 
  }
  else if (user_decision == "Scissor" && comp_decision == "Paper") {
    std::cout << "====================\n";
    std::cout << "YOU WIN!!!\n"; 
  } 
  else if (user_decision == "Scissor" && comp_decision == "Lizard") {
    std::cout << "====================\n";
    std::cout << "YOU DECAPITATED THE LIZARD! YOU WIN!!!\n"; 
  }
  else if (user_decision == "Scissor" && comp_decision == "Spock") {
    std::cout << "====================\n";
    std::cout << "YOU HAVE BEEN SMASHED! YOU LOSE!!!\n"; 
  }

  // For lizard event

  if (user_decision == "Lizard" && comp_decision == "Rock") {
    std::cout << "====================\n";
    std::cout << "YOU LOSE!!!\n";
  }
  else if (user_decision == "Lizard" && comp_decision == "Scissor") {
    std::cout << "====================\n";
    std::cout << "YOU LOSE!!!\n"; 
  }
  else if (user_decision == "Lizard" && comp_decision == "Paper") {
    std::cout << "====================\n";
    std::cout << "YOU WIN!!!\n"; 
  } 
  else if (user_decision == "Lizard" && comp_decision == "Lizard") {
    std::cout << "====================\n";
    std::cout << "DRAW!!!\n"; 
  }
  else if (user_decision == "Lizard" && comp_decision == "Spock") {
    std::cout << "====================\n";
    std::cout << "YOU POISONED SPOCK! YOU WIN!!!\n"; 
  }

    // For spock event

  if (user_decision == "Spock" && comp_decision == "Rock") {
    std::cout << "====================\n";
    std::cout << "YOU WIN!!!\n";
  }
  else if (user_decision == "Spock" && comp_decision == "Scissor") {
    std::cout << "====================\n";
    std::cout << "YOU WIN!!!\n"; 
  }
  else if (user_decision == "Spock" && comp_decision == "Paper") {
    std::cout << "====================\n";
    std::cout << "YOU LOSE!!!\n"; 
  } 
  else if (user_decision == "Spock" && comp_decision == "Lizard") {
    std::cout << "====================\n";
    std::cout << "YOU HAVE BEEN POISONED! YOU LOSE!!!\n"; 
  }
  else if (user_decision == "Spock" && comp_decision == "Spock") {
    std::cout << "====================\n";
    std::cout << "DRAW!!!\n"; 
  }
}