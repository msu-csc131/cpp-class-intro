/**
 * Demonstration of a simple class in C++.
 *
 * @file main.cpp
 * @author Jim Daehn
 */
#include <cstdlib>
#include <iostream>

class Square {
 private:
  int side;
 public:
  Square(int s = 1) {
    side = s;
  }
  void setSide(int s) {
    side = s;
  }
  int getSide() {
    return side;
  }
};

int main() {
  std::cout << "An introduction to classes in C++!" << std::endl;
  Square defaultSquare{};
  std::cout << "defaultSquare.getSide() = " << defaultSquare.getSide() << std::endl;
  Square initializedSquare{200};
  std::cout << "initializedSquare.getSide() = " << initializedSquare.getSide() << std::endl;
  std::cout << "\nAfter doubling each square's side..." << "\n" << std::endl;
  defaultSquare.setSide(defaultSquare.getSide() * 2);
  initializedSquare.setSide(initializedSquare.getSide() * 2);
  std::cout << "defaultSquare.getSide() = " << defaultSquare.getSide() << std::endl;
  std::cout << "initializedSquare.getSide() = " << initializedSquare.getSide() << std::endl;
  return EXIT_SUCCESS;
}