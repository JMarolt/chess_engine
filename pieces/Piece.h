#include <iostream>

class Piece {

    public:
        Piece(int location) : bitboardLocation(location) {}
        ~Piece() {
            std::cout << "Piece dead" << std::endl;
        }
        void moveTo(int newLocation) {
            bitboardLocation = newLocation;
        }

    private:
        int bitboardLocation;

};