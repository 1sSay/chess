#include "include/pieces/King.h"

/*
* TODO:
* - move
* - isValidMove
* 
*/

King::King(Color color, Position position)
    : color(color), position(position) {}

void King::move(Position newPos) {
    // moving the piece
}

bool King::isValidMove(Position newPos) const {
    // checking that move is valid or not
}

Color King::getColor() const {
    return color;
}

Position King::getPosition() const {
    return position;
}
