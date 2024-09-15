#include <iostream>

#include "include/board/Board.h"

int main(int argc, const char** argv) {
    Board board;

    std::cout << "Welcome to Chess!" << std::endl;

    std::vector<std::string> field = board.getBoard();

    for (std::string s : field) {
        std::cout << s << std::endl;
    }

    return 0;
}