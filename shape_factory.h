#ifndef SHAPE_FACTORY_H
#define SHAPE_FACTORY_H

#include <memory>
#include <string>
#include "shape.h"

class ShapeFactory {
public:
    static std::unique_ptr<Shape> createShape(const std::string& type, double a, double b = 0);
};

#endif
