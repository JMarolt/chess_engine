#pragma once

#include "board.h"

class Game {
    public:
        Game();
        ~Game() {
            delete board;
        }

        void run();

    private:
        Board* board;
};