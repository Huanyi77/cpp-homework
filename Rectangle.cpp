#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(int w, int h, int x, int y, std::string color, std::string filled)
    : Point(x, y, std::move(color), std::move(filled)), width(w), height(h) {
    std::cout << "Calling Rectangle class constructor now!" << std::endl;
}

int Rectangle::getWidth() const { return width; }
int Rectangle::getHeight() const { return height; }
void Rectangle::setWidth(int w) { width = w; }
void Rectangle::setHeight(int h) { height = h; }

double Rectangle::getPerimeter() const { return 2.0 * (width + height); }
double Rectangle::getArea() const { return static_cast<double>(width) * height; }

void Rectangle::show() const {
    std::cout << "origin (" << x << ", " << y << ")\n"
              << "width x height: " << width << " x " << height << "\n"
              << "color: " << color << "\n"
              << "filled: " << filled << std::endl;
}
