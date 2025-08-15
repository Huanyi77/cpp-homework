#include "utils.h"
#include <iostream>

void displayData(const Point& obj) {
    obj.show();
    std::cout << "perimeter: " << obj.getPerimeter() << "\n"
              << "Area: " << obj.getArea() << "\n"
              << "-----------------------------" << std::endl;
}
