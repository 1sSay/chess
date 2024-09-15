#include "include/pieces/Rook.h"

/*
* TODO:
* - move
* - isValidMove
* 
*/

Rook::Rook(Color color, Position position)
    : color(color), position(position) {}

void Rook::move(Position newPos) {
    // moving the piece
}

bool Rook::isValidMove(Position newPos) const {
    // checking that move is valid or not
    return true;
}

Color Rook::getColor() const {
    return color;
}

Position Rook::getPosition() const {
    return position;
}

char Rook::getLetter() const {
    return 'R';
}