#ifndef POINT_H
#define POINT_H

#include <string>
#include <iostream>

class Point {
protected:
    int x, y;
    std::string color;
    std::string filled; // "yes"/"no"
public:
    Point(int x=1, int y=1, std::string color="white", std::string filled="no");
    virtual ~Point() = default; // 重要：虛擬解構子

    // getter
    int getX() const;
    int getY() const;
    std::string getColor() const;
    std::string getFilled() const;

    // setter
    void setX(int);
    void setY(int);
    void setColor(std::string);
    void setFilled(std::string);

    // 虛擬介面（允許子類覆寫）
    virtual double getPerimeter() const;
    virtual double getArea() const;
    virtual void show() const;
};

#endif
