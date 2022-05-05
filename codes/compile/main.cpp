#include "line.h"
#include "point.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    point p1(0, 0);
    point p2(3, 4);
    line l(p1, p2);
    cout << l.dist() << endl;
    return 0;
}
