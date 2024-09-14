#include "include/pieces/Queen.h"

/*
* TODO:
* - move
* - isValidMove
* 
*/

Queen::Queen(Color color, Position position)
    : color(color), position(position) {}

void Queen::move(Position newPos) {
    // moving the piece
}

bool Queen::isValidMove(Position newPos) const {
    // checking that move is valid or not
}

Color Queen::getColor() const {
    return color;
}

Position Queen::getPosition() const {
    return position;
}
