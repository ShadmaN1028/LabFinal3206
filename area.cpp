#include "circle.h"
#include "rectangle.h"
#include "square.h"
#define _USE_MATH_DEFINES
#include <cmath>

Circle::Circle(double r) : radius(r) {}

double Circle::area() const {
    return M_PI * radius * radius;
}


Rectangle::Rectangle(double w, double h) : width(w), height(h) {}

double Rectangle::area() const {
    return width * height;
}

Square::Square(double s) : side(s) {}

double Square::area() const {
    return side * side;
}
