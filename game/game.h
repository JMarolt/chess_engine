#pragma once

#include "board.h"

#include <iostream>

class Game {
    public:
        Game();
        ~Game() {
            delete board;
            std::cout << "Game dead" << std::endl;
        }

        void run();

    private:
        Board* board;
};