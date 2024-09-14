#pragma once

#include <cstdlib>

#include "include/pieces/Piece.h"
#include "include/pieces/PieceColor.h"
#include "include/board/Position.h"

class Pawn : public Piece {
    Color color;
    Position position;
public:
    Pawn(Color, Position);
    void move(Position) override;
    bool isValidMove(Position) const override;
    Color getColor() const override;
    Position getPosition() const override;
};