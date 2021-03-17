#include <iostream>

int main() {
  double weight;
  int x;
  std::cout << "Please enter your weight:";
  std::cin >> weight;

  std::cout << "What planet do you wish to conquer?";
  std::cout << "1. Mercury 2. Venus 3. Mars  4. Jupiter\n";
  std::cout << "5. Saturn 6. Uranus 7. Neptune\n\n";

  std::cout << "Input planet value: ";
  std::cin >> x;
  
  switch (x) {
    case 1:
    weight = weight * 0.38;
    std::cout << "Your weight on Mercury: " << weight;
    break;

    case 2:
    weight = weight * 0.91;
    std::cout << "Your weight on Venus: " << weight;
    break;

    case 3:
    weight = weight * 0.38;
    std::cout << "Your weight on Mars: " << weight;
    break;
    
    case 4:
    weight = weight * 2.34;
    std::cout << "Your weight on Jupiter: " << weight;
    break;

    case 5:
    weight = weight * 1.06;
    std::cout << "Your weight on Saturn: " << weight;
    break;

    case 6:
    weight = weight * 0.92;
    std::cout << "Your weight on Uranus: " << weight;
    break;

    case 7:
    weight = weight * 1.19;
    std::cout << "Your weight on Neptune: " << weight;
    break;

    default:
    std::cout << "You will fight on Earth: " << weight;
    
  }
  
}