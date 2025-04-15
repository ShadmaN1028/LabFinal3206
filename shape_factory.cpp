#include "shape_factory.h"
#include "circle.h"
#include "rectangle.h"
#include "square.h"

std::unique_ptr<Shape> ShapeFactory::createShape(const std::string& type, double a, double b) {
    if (type == "circle") {
        return std::make_unique<Circle>(a);
    } else if (type == "rectangle") {
        return std::make_unique<Rectangle>(a, b);
    } else if (type == "square") {
        return std::make_unique<Square>(a);
    } else {
        return nullptr;
    }
}
