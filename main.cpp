#include "Point.h"
#include "Circle.h"
#include "Rectangle.h"
#include "utils.h"

int main() {
    Point p1;
    displayData(p1);

    Circle c1;
    displayData(c1);

    Circle c2(10, 6, 8, "yellow", "yes");
    displayData(c2);

    Rectangle r1;
    displayData(r1);

    Rectangle r2(6, 4, 3, 5, "green", "yes");
    displayData(r2);

    return 0;
}
