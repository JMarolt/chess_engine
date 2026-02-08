#include <iostream>

#include "game/game.h"

int main(){
    Game* chessGame = new Game();
    
    delete chessGame;
    return 0;
}