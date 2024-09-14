#pragma once

#include "include/board/Position.h"

class Cell {
public:
    virtual ~Cell() {}
    virtual Position getPosition() const = 0;
};