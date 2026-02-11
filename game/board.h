#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <cstdint>

class Board {
    public:
        Board(std::string);
        ~Board() {
            std::cout << "Board dead" << std::endl;
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

        std::vector<uint8_t> bitboard;
};