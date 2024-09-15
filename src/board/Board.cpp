#include <iostream>

#include "include/board/Board.h"
#include "include/pieces/Bishop.h"
#include "include/pieces/King.h"
#include "include/pieces/Knight.h"
#include "include/pieces/Pawn.h"
#include "include/pieces/Queen.h"
#include "include/pieces/Rook.h"

Board::Board() {
    board[0][0] = new Rook(Color::White, Position(0, 0));
    board[1][0] = new Knight(Color::White, Position(1, 0));
    board[2][0] = new Bishop(Color::White, Position(2, 0));
    board[3][0] = new Queen(Color::White, Position(3, 0));
    board[4][0] = new King(Color::White, Position(4, 0));
    board[5][0] = new Bishop(Color::White, Position(5, 0));
    board[6][0] = new Knight(Color::White, Position(6, 0));
    board[7][0] = new Rook(Color::White, Position(7, 0));
    for (size_t col = 0; col < SIZE; col++) {
        board[col][1] = new Pawn(Color::White, Position(col, 1));
    }

    for (size_t row = 2; row < SIZE - 2; row++) {
        for (size_t col = 0; col < SIZE; col++) {
            board[col][row] = nullptr;
        }
    }

    board[0][7] = new Rook(Color::Black, Position(0, 7));
    board[1][7] = new Knight(Color::Black, Position(1, 7));
    board[2][7] = new Bishop(Color::Black, Position(2, 7));
    board[3][7] = new Queen(Color::Black, Position(3, 7));
    board[4][7] = new King(Color::Black, Position(4, 7));
    board[5][7] = new Bishop(Color::Black, Position(5, 7));
    board[6][7] = new Knight(Color::Black, Position(6, 7));
    board[7][7] = new Rook(Color::Black, Position(7, 7));
    for (size_t col = 0; col < SIZE; col++) {
        board[col][6] = new Pawn(Color::Black, Position(col, 6));
    }
}

std::vector<std::string> Board::getBoard() const {
    std::vector<std::string> result(10);
    result[0] = " ABCDEFGH ";

    for (size_t row = 0; row < SIZE; row++) {
        std::string tmp;
        tmp += (char)(row + 49);
        for (size_t col = 0; col < SIZE; col++) {
            if (board[col][row] == nullptr) {
                if (col % 2 == row % 2) {
                    tmp += '0';
                }
                else {
                    tmp += ' ';
                }
            }
            else {
                tmp += board[col][row]->getLetter();
            }
        }
        tmp += (char)(row + 49);
        result[8 - row] = tmp;
    }

    result[9] = " ABCDEFGH ";


    return result;
}