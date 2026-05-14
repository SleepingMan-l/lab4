#pragma once
#include <cmath>

class Figure
{
private:
    float x1, y1, x2, y2;

public:
    float length()
    {
        return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    }

    Figure()
    {
        x1 = y1 = x2 = y2 = 0;
    }

    Figure(Figure& a)
    {
        x1 = a.x1; x2 = a.x2;
        y1 = a.y1; y2 = a.y2;
    }

    Figure(float x1, float y1, float x2, float y2)
    {
        this->x1 = x1; this->x2 = x2;
        this->y1 = y1; this->y2 = y2;
    }
};

class Rhombus : public Figure
{
private:
    Figure p, q;

public:
    float perimeter()
    {
        float halfP = p.length() / 2.0f;
        float halfQ = q.length() / 2.0f;
        
        float sideLength = (float) sqrt((halfP * halfP) + (halfQ * halfQ));
        
        return sideLength * 4.0f;
    }

    float area()
    {
        return p.length() * q.length() / 2.0f;
    }

    Rhombus()
    {
        p = q = Figure();
    }

    Rhombus(Rhombus& a)
    {
        p = a.p;
        q = a.q;
    }

    Rhombus(Figure& f1, Figure& f2)
    {
        p = f1;
        q = f2;
    }
};