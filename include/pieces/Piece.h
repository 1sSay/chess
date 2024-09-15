#pragma once

#include <cstdlib>

#include "include/board/Position.h"
#include "include/board/Color.h"

class Piece {
public:
    virtual ~Piece() {};
    virtual void move(Position) = 0;
    virtual bool isValidMove(Position) const = 0;
    virtual Position getPosition() const = 0;
    virtual Color getColor() const = 0;
    virtual char getLetter() const = 0;
};