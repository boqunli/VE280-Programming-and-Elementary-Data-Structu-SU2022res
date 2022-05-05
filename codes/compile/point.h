#ifndef POINT_H
#define POINT_H


class point
{
private:
    int x;
    int y;
public: 
    point();
    point(int, int);
    ~point();
    void set(int x, int y);
    int getX();
    int getY();
};

#endif // !POINT_H