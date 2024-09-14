#include "include/board/Board.h"

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

    board[0][7] = new Rook(Color::Black, Position(0, 7));
    board[1][7] = new Knight(Color::Black, Position(1, 7));
    board[2][7] = new Bishop(Color::Black, Position(2, 7));
    board[3][7] = new Queen(Color::Black, Position(3, 7));
    board[4][7] = new King(Color::Black, Position(4, 7));
    board[5][7] = new Bishop(Color::Black, Position(5, 7));
    board[6][7] = new Knight(Color::Black, Position(6, 7));
    board[7][7] = new Rook(Color::Black, Position(7, 7));
    for (size_t col = 0; col < SIZE; col++) {
        board[col][1] = new Pawn(Color::Black, Position(col, 6));
    }
}