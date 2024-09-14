#pragma once

#include <cstdlib>
#include <utility>

#include "include/board/Cell.h"
#include "include/board/Color.h"

class Piece : public Cell {
public:
    virtual ~Piece() {};
    virtual void move(Position) = 0;
    virtual bool isValidMove(Position) const = 0;
    virtual Color getColor() const = 0;
};