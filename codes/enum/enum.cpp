#include <iostream>

using namespace std;

struct people {
    string name;
    string gender;
    int age;
};

// size = sizeof(int) * 2
struct point
{
    int x;
    int y;
};

// size = sizeof(long)
union myUnion {
    short a;
    int b;
    long c;
    char d;
};


enum MyEnum {
    ONE,
    TWO,
    THREE
};


