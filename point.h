#pragma once
#include <iostream>

class Point {
    public:
        int x;
        int y;

    Point(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
    }
};

std::ostream& operator<<(std::ostream& os, const Point& point);
Point AddInBorders(Point start, Point add, Point min, Point max);
