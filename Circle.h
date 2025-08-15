#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"
#include <string>

class Circle : public Point {
private:
    int radius;
public:
    Circle(int r=1, int x=10, int y=10, std::string color="red", std::string filled="yes");
    int getRadius() const;
    void setRadius(int);
    double getPerimeter() const override;
    double getArea() const override;
    void show() const override;
};

#endif
