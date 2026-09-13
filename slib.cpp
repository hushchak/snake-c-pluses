#include "slib.h"
#include "point.h"

Point DirectionToPoint(Direction direction) {
    switch (direction) {
        case Direction::Up:
            return Point(0, 1);
        case Direction::Down:
            return Point(0, -1);
        case Direction::Left:
            return Point(-1, 0);
        case Direction::Right:
            return Point(1, 0);
        default :
            return Point(0, 0);
    }
}

Direction Invert(Direction direction) {
    switch (direction) {
        case Direction::Up:
            return Direction::Down;
        case Direction::Down:
            return Direction::Up;
        case Direction::Left:
            return Direction::Right;
        case Direction::Right:
            return Direction::Left;
        default :
            return Direction::Up;
    }
}