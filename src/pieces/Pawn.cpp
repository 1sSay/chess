#include "include/pieces/Pawn.h"

/*
* TODO:
* - move
* - isValidMove
* 
*/

Pawn::Pawn(Color color, Position position)
    : color(color), position(position) {}

void Pawn::move(Position newPos) {
    // moving the piece
}

bool Pawn::isValidMove(Position newPos) const {
    // checking that move is valid or not
    return true;
}

Color Pawn::getColor() const {
    return color;
}

Position Pawn::getPosition() const {
    return position;
}

char Pawn::getLetter() const {
    return 'P';
}