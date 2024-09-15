#pragma once

#include "include/pieces/Piece.h"

class Knight : public Piece {
    Color color;
    Position position;
public:
    Knight(Color, Position);
    void move(Position) override;
    bool isValidMove(Position) const override;
    Color getColor() const override;
    Position getPosition() const override;
    char getLetter() const override;
};