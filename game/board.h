#pragma once

#include <string>
#include <iostream>

class Board {
    public:
        Board(std::string*);
        ~Board() {
            delete fen;
            std::cout << "Board destroyed, resources cleaned up." << std::endl;
        }

        void initializeBoard();
        void printBoard();

    private:
        std::string* fen;
};