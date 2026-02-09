#pragma once

#include <string>
#include <iostream>

class Board {
    public:
        Board(std::string);
        ~Board() {
            std::cout << "Board destroyed, resources cleaned up." << std::endl;
        }

        void initializeBoard();
        void printBoard();
        void recreateFEN();

    private:
        std::string fen;
        std::string fenPlacement;
        std::string fenColor;
        std::string fenCastling;
        std::string fenEnPassant;
        std::string fenHalfMove;
        std::string fenFullMove;
};