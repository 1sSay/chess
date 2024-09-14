#pragma once

#include <cstdlib>
#include <utility>

#include "include/pieces/PieceColor.h"
#include "include/board/Position.h"

class Piece {
public:
    virtual ~Piece();
    virtual void move(Position) = 0;
    virtual bool isValidMove(Position) const = 0;
    virtual Color getColor() const = 0;
    virtual Position getPosition() const = 0;
};