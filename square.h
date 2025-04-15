#include "shape.h"

class Square : public Shape {
private:
    double side;
public:
    Square(double s);
    double area() const override;
};

