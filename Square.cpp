/**
 * Square implementation.
 *
 * @file Square.cpp
 * @author Jim Daehn <jdaehn@missouristate.edu>
 */

#include "Square.h"

Square::Square(int s) {
    side = s;
}

void Square::setSide(int s) {
    side = s;
}

int Square::getSide() const {
    return side;
}