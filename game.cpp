#include "game.h"
#include "slib.h"
#include "point.h"
#include <iostream>

void Game::run() {
    std::cout << "Game is running" << std::endl;

    Object level[5][5] = {
        {Object::None, Object::None, Object::None, Object::None, Object::None},
        {Object::None, Object::None, Object::None, Object::None, Object::None},
        {Object::None, Object::None, Object::None, Object::None, Object::None},
        {Object::None, Object::None, Object::None, Object::None, Object::None},
        {Object::None, Object::None, Object::None, Object::None, Object::None}
    };



    // get input
    // check collisions
    // move snake
    // render
    // wait for next frame
}