/* 
Rock Paper Scissors
*/

#include <iostream>
#include <stdlib.h>
#include <string>

int main () {
  // Live long and prosper

  srand (time(NULL));
    
  int computer = rand() % 3 + 1;

  int user = 0;
  std::string user_decision;
  std::string comp_decision;

  // Prompt user to select choice

  std::cout << "====================\n";
  std::cout << "Rock Paper Scissors!\n";
  std::cout << "====================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";

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

  
}