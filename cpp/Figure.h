#pragma once

#include <cmath>

class Figure
{
private:
    float x1, y1, x2, y2;

public:
    float length() { }

    Figure() { }

    Figure(Figure& a) { }

    Figure(float x1, float y1, float x2, float y2) { }
};
