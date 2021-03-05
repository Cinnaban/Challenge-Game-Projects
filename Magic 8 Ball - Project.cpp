#include <iostream>
#include <cstdlib>

int main () {
  std::cout << "MAGIC 8-BALL:";
  srand(time(NULL));
  int answer = std::rand() % 10;

  if (answer == 0) {
    std::cout << "Very certain.\n";
  }
  else if (answer == 10) {
    std::cout << "Very Doubtful.\n";
  }
  else if (answer == 9) {
    std::cout << "Doubtful.\n";
  }
  else if (answer == 8) {
    std::cout << "Very Uncertain.\n";
  }
  else if (answer == 7) {
    std::cout << "Somewhat Uncertain.\n";
  }
  else if (answer == 6) {
    std::cout << "Uncertain.\n";
  }
  else if (answer == 5) {
    std::cout << "Somewhat possible.\n";
  }
  else if (answer == 4) {
    std::cout << "Possible.\n";
  }
  else if (answer == 3) {
    std::cout << "Very Possible.\n";
  }
  else if (answer == 2) {
    std::cout << "Somewhat certain.\n";
  }
  else { 
    std::cout << "Certain.\n";
  }
}