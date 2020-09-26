#pragma once

struct Coordinate
{
    int x;
    int y;
    Coordinate(int xx = 0, int yy = 0) : x(xx), y(yy) {}
};

class Grid
{
private:
    Coordinate begin;
    Coordinate end;

public:
    Grid(int xx, int yy) : begin{0, 0}, end{xx, yy} {}
    Coordinate getEnd()
    {
        return end;
    }
};