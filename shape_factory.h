
#include <memory>
#include <string>
#include "shape.h"

class ShapeFactory {
public:
    static std::unique_ptr<Shape> createShape(const std::string& type, double a, double b = 0);
};


