#pragma once

#include "Figure.h"

class Rhombus : public Figure
{
private:
    Figure p, q;

public:
    float perimeter() { }

    float area() { }

    Rhombus() { }

    Rhombus(Rhombus& a) { }

    Rhombus(Figure& f1, Figure& f2) { }
};
