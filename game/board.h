#pragma once

#include <string>

class Board {
    public:
        Board(std::string*);
        ~Board() {
            delete epd;
        }

        void initialize();
        void display();

    private:
        std::string* epd;
};