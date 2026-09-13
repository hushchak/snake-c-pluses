#pragma once
#include "point.h"

enum class Object {
    None,
    Wall,
    Snake,
    Apple
};

enum class Direction {
    Up,
    Down,
    Left,
    Right
};

Point DirectionToPoint(Direction direction);
Direction Invert(Direction direction);