/**
 * Square specification.
 *
 * @file Square.h
 * @author Jim Daehn <jdaehn@missouristate.edu>
 */

#ifndef CPP_CLASS_INTRO_SQUARE_H
#define CPP_CLASS_INTRO_SQUARE_H

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

#endif //CPP_CLASS_INTRO_SQUARE_H
