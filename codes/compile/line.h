#ifndef LINE_H
#define LINE_H
#include "point.h"

class line
{
private:
    point p1;
    point p2;
public:
    line();
    line(point, point);
    ~line();
    double dist();
};

#endif // !LINE_H