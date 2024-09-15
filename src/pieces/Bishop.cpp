#include "include/pieces/Bishop.h"

/*
* TODO:
* - move
* - isValidMove
* 
*/

Bishop::Bishop(Color color, Position position)
    : color(color), position(position) {}

void Bishop::move(Position newPos) {
    // moving the piece
}

bool Bishop::isValidMove(Position newPos) const {
    // checking that move is valid or not
    return true;
}

Color Bishop::getColor() const {
    return color;
}

Position Bishop::getPosition() const {
    return position;
}

char Bishop::getLetter() const {
    return 'B';
}