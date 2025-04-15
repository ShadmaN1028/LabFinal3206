#include "shape.h"

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h);
    double area() const override;
};
