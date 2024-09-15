#pragma once

#include "include/pieces/Piece.h"

class King : public Piece {
    Color color;
    Position position;
public:
    King(Color, Position);
    void move(Position) override;
    bool isValidMove(Position) const override;
    Color getColor() const override;
    Position getPosition() const override;
    char getLetter() const override;
};