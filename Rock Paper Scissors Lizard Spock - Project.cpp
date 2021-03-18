/*
The logic:

    Scissors cuts Paper.
    Paper covers Rock.
    Rock crushes Lizard.
    Lizard poisons Spock.
    Spock smashes Scissors.
    Scissors decapitate Lizard.
    Lizard eats Paper.
    Paper disproves Spock.
    Spock vaporizes Rock.
    (and as it always has) Rock crushes Scissors.

We will first tackle Rock, Paper, Scissors first, before making it into Rock, Paper, Scissors, Lizard, Spock!
*/

#include <iostream>
#include <stdlib.h>

int main() {
  //Live long and prosper
  srand (time(NULL));
  int computer = rand() % 3 + 1;

  int user = 0;
  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";
  
  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cout << "4) lizard\n";
  std::cout << "5) spock\n";
   
  std::cout << "shoot! ";
  
  int rock = 1;
  int paper = 2;
  int scissors = 3;
  int lizard = 4;
  int spock = 5;

  std::cin >> user;

/*
rock beats scissors
scissors beats paper
paper beats rock
rock beats lizard
lizard beats spock
spock beats scissors
scissors beats lizard
lizard beats paper
paper beats spock
spock beats rock
*/

std::cout << "computer: " << computer << "\n\n";

  if (user == rock && computer == scissors) {
    std::cout << "You win!\n";
  } else if (user == scissors && computer == paper) {
    std::cout << "You win!\n";
  } else if (user == paper && computer == rock) {
    std::cout << "You win!\n";
  } else if (user == rock && computer == lizard) {
    std::cout << "You win!\n";
  } else if (user == lizard && computer == spock) {
    std::cout << "You win!\n";
  } else if (user == spock && computer == scissors) {
    std::cout << "You win!\n";
  } else if (user == scissors && computer == lizard) {
    std::cout << "You win!\n";
  } else if (user == lizard && computer == paper) {
    std::cout << "You win!\n";
  } else if (user == paper && computer == spock) {
    std::cout << "You win!\n";
  } else if (user == spock && computer == rock) {
    std::cout << "You win!\n";
  } else if (user == computer) {
    std::cout << "Tie!\n";
  } else {
    std::cout << "You lose :( \n";
  }
}


