#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Point.h"

class Rectangle : public Point {
private:
    int width;
    int height;
public:
    Rectangle(int w=2, int h=1, int x=0, int y=0,
              std::string color="blue", std::string filled="no");
    int getWidth() const;
    int getHeight() const;
    void setWidth(int);
    void setHeight(int);

    double getPerimeter() const override;
    double getArea() const override;
    void show() const override;
};

#endif
