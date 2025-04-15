#include "circle.h"
#define _USE_MATH_DEFINES
#include <cmath>

Circle::Circle(double r) : radius(r) {}

double Circle::area() const {
    return M_PI * radius * radius;
}
