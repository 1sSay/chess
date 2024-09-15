#pragma once

#include "include/pieces/Piece.h"

class Queen : public Piece {
    Color color;
    Position position;
public:
    Queen(Color, Position);
    void move(Position) override;
    bool isValidMove(Position) const override;
    Color getColor() const override;
    Position getPosition() const override;
    char getLetter() const override;
};