#pragma once

#include <cstdlib>

#include "include/board/Cell.h"
#include "include/pieces/Piece.h"
#include "include/pieces/Bishop.h"
#include "include/pieces/King.h"
#include "include/pieces/Knight.h"
#include "include/pieces/Pawn.h"
#include "include/pieces/Queen.h"
#include "include/pieces/Rook.h"

class Board {
    static const size_t SIZE = 8;
    Cell* board[SIZE][SIZE];

public:
    Board();
};