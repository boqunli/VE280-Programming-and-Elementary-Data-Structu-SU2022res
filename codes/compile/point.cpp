#include "point.h"

point::point() : x(0), y(0) {}

point::point(int x, int y) {
    this->x = x;
    this->y = y;
}

point::~point() {}

void point::set(int x, int y) {
    this->x = x;
    this->y = y;
}

int point::getX() {
    return x;
}

int point::getY() {
    return y;
}