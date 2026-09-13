#include "point.h"
#include <fstream>

std::ostream& operator<<(std::ostream& os, const Point& point) {
    os << "(" << point.x << ", " << point.y << ")";
    return os;
}

int AddInBorder(int start, int add, int min, int max) {
    int size = max - min + 1;
    int result = start + add;

    if (result > max) {
        int overflow = size % std::abs(max - result);
        result = min + overflow;
    }
    else if (result < min) {
        int overflow = size % std::abs(result - min);
        result = max - overflow;
    }

    return result;
}

Point AddInBorders(Point start, Point add, Point min, Point max) {
    return Point(
        AddInBorder(start.x, add.x, min.x, max.x),
        AddInBorder(start.y, add.y, min.y, max.y)
    );
}