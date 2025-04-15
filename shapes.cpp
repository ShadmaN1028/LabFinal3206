#include <iostream>
#include <memory>
#include <cmath>
#include <string>

class Shape {
public:
    virtual double area() const = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return M_PI * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override {
        return width * height;
    }
};

class Square : public Shape {
private:
    double side;
public:
    Square(double s) : side(s) {}
    double area() const override {
        return side * side;
    }
};

class ShapeFactory {
public:
    static std::unique_ptr<Shape> createShape(const std::string& type, double a, double b = 0) {
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
};
