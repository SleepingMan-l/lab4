#include <iostream>
#include "classes.h"

int main()
{
    Figure p = Figure(0, 0, 1, 2);
    Figure q = Figure(1, 2, 4, 5);

    Rhombus r = Rhombus(p, q);

    std::cout << "Area: " << r.area() << std::endl;
    std::cout << "Perimeter: " << r.perimeter() << std::endl;

    return 0;
}
