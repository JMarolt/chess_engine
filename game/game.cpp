#include "game.h"
#include "board.h"

Game::Game() {
    board = new Board(new std::string("rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1"));
    board->printBoard();
}