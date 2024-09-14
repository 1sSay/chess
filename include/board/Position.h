#pragma once

#include <cstdlib>

struct Position
{
    int8_t col;
    int8_t row;

    Position(int8_t col, int8_t row)
        : col(col), row(row) {}
};
