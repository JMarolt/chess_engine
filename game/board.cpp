#include <iostream>
#include "board.h"

Board::Board(std::string initialFEN) : fen(initialFEN) {
    initializeBoard();
}

void Board::printBoard() {
    for (int i = 0; i < fenPlacement.size(); i++) {
        if (fenPlacement[i] == '/') {
            std::cout << std::endl;
        } else if (isdigit(fenPlacement[i])) {
            int emptySquares = fenPlacement[i] - '0';
            for (int j = 0; j < emptySquares; j++) {
                std::cout << "-";
            }
        } else {
            std::cout << fenPlacement[i];
        }
    }
    std::cout << std::endl;
}

void Board::initializeBoard() {
    int pos = 0;
    int spacePos = fen.find(' ', pos);
    fenPlacement = fen.substr(pos, spacePos - pos);
    
    pos = spacePos + 1;
    spacePos = fen.find(' ', pos);
    fenColor = fen.substr(pos, spacePos - pos);
    
    pos = spacePos + 1;
    spacePos = fen.find(' ', pos);
    fenCastling = fen.substr(pos, spacePos - pos);
    
    pos = spacePos + 1;
    spacePos = fen.find(' ', pos);
    fenEnPassant = fen.substr(pos, spacePos - pos);
    
    pos = spacePos + 1;
    spacePos = fen.find(' ', pos);
    fenHalfMove = fen.substr(pos, spacePos - pos);
    
    pos = spacePos + 1;
    fenFullMove = fen.substr(pos);
}

void Board::recreateFEN() {
    fen = fenPlacement + " " + fenColor + " " + fenCastling + " " + fenEnPassant + " " + fenHalfMove + " " + fenFullMove;
}