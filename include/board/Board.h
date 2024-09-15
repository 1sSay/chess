#pragma once

#include <cstdlib>
#include <vector>
#include <string>

#include "include/pieces/Piece.h"

class Board {
    static const size_t SIZE = 8;
    Piece* board[SIZE][SIZE];

public:
    Board();
    std::vector<std::string> getBoard() const;
};