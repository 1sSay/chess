#pragma once

#include "include/pieces/Piece.h"

class Rook : public Piece {
    Color color;
    Position position;
public:
    Rook(Color, Position);
    void move(Position) override;
    bool isValidMove(Position) const override;
    Color getColor() const override;
    Position getPosition() const override;
    char getLetter() const override;
};