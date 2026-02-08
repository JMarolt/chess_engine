#include <iostream>
#include "board.h"

Board::Board(std::string* initialFEN) : fen(initialFEN) {
    
}

void Board::printBoard() {
    std::cout << "Current Board State (FEN): " << *fen << std::endl;
}

void Board::initializeBoard() {
    
}