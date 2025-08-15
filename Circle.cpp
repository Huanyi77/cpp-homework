#include "Circle.h"
#include <cmath>
#include <iostream>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

Circle::Circle(int r, int x, int y, std::string color, std::string filled)
    : Point(x, y, std::move(color), std::move(filled)), radius(r) {
    std::cout << "Calling Circle class constructor now!" << std::endl;
}

int Circle::getRadius() const { return radius; }
void Circle::setRadius(int r) { radius = r; }

double Circle::getPerimeter() const { return 2.0 * M_PI * radius; }
double Circle::getArea() const { return M_PI * radius * radius; }

void Circle::show() const {
    std::cout << "center (" << x << ", " << y << ")\n"
              << "radius: " << radius << "\n"
              << "color: " << color << "\n"
              << "filled: " << filled << std::endl;
}
