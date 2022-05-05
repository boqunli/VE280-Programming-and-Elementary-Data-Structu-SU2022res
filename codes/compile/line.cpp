#include "line.h"
#include <cmath>

line::line() {}

line::line(point p1, point p2) {
    this->p1.set(p1.getX(), p1.getY());
    this->p2.set(p2.getX(), p2.getY());
}

line::~line() {}

double line::dist() {
    return sqrt( (p1.getX() - p2.getX()) * (p1.getX() - p2.getX()) + (p1.getY() - p2.getY()) * (p1.getY() - p2.getY()) );
}