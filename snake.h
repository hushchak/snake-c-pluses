#pragma once
#include "slib.h"
#include "vector"

class Snake {
    public:
        Direction direction;
        std::vector<Point> segments;

    Snake(Point startPoint, Direction startDirection, Point minPoint, Point maxPoint) {
        direction = startDirection;
        segments.push_back(startPoint);
        segments.push_back(AddInBorders(
            segments[0],
            DirectionToPoint(Invert(startDirection)),
            minPoint,
            maxPoint
        ));
        segments.push_back(AddInBorders(
            segments[1],
            DirectionToPoint(Invert(startDirection)),
            minPoint,
            maxPoint
        ));
    }
};