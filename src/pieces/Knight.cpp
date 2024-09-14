#include "include/pieces/Knight.h"

/*
* TODO:
* - move
* - isValidMove
* 
*/

Knight::Knight(Color color, Position position)
    : color(color), position(position) {}

void Knight::move(Position newPos) {
    // moving the piece
}

bool Knight::isValidMove(Position newPos) const {
    // checking that move is valid or not
    return true;
}

Color Knight::getColor() const {
    return color;
}

Position Knight::getPosition() const {
    return position;
}
