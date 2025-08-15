#include "Point.h"

Point::Point(int a, int b, std::string color2, std::string filled2)
    : x(a), y(b), color(std::move(color2)), filled(std::move(filled2)) {
    std::cout << "calling Point class Constructor now!" << std::endl;
}

// getters
int Point::getX() const { return x; }
int Point::getY() const { return y; }
std::string Point::getColor() const { return color; }
std::string Point::getFilled() const { return filled; }

// setters
void Point::setX(int x2) { x = x2; }
void Point::setY(int y2) { y = y2; }
void Point::setColor(std::string color2) { color = std::move(color2); }
void Point::setFilled(std::string filled2) { filled = std::move(filled2); }

// default implementations
double Point::getPerimeter() const { return 1.0; }
double Point::getArea() const { return 1.0; }

void Point::show() const {
    std::cout << "coordinate:(" << x << "," << y << ")\n"
              << "color:" << color << "\n"
              << "filled:" << filled << std::endl;
}
