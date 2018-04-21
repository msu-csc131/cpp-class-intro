/**
 * Demonstration of a simple class in C++.
 *
 * @file main.cpp
 * @author Jim Daehn
 */
#include <cstdlib>
#include <iostream>

/**
 * A simple abstraction of a Square.
 */
class Square {
private:
    int side;
public:
    /**
     * Square constructor.
     * Notice the use of the keyword explicit and the default initialization
     * only appear here, in the declaration and not in its implementation.
     * @param s the length of the side of this Square
     */
    explicit Square(int s = 1);

    /**
     * Square mutator method to change the length of the side of this Square.
     * @param s the new length of the side of this Square
     */
    void setSide(int s);

    /**
     * Square accessor method used to access the length of the side of this Square.
     * @return The length of the side of this Square is returned.
     */
    int getSide() const;
};

Square::Square(int s) {
    side = s;
}

void Square::setSide(int s) {
    side = s;
}

int Square::getSide() const {
    return side;
}

/**
 * Entry-point of this application.
 * @return EXIT_SUCCESS is returned upon successful execution of this program.
 */
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