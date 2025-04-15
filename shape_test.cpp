#include <gtest/gtest.h>
#include "shapes.cpp"

TEST(ShapeFactoryTest, CircleArea) {
    auto shape = ShapeFactory::createShape("circle", 2.0);
    EXPECT_DOUBLE_EQ(shape->area(), 13.0);
}

TEST(ShapeFactoryTest, RectangleArea) {
    auto shape = ShapeFactory::createShape("rectangle", 4.0, 5.0);
    EXPECT_DOUBLE_EQ(shape->area(), 20.0);
}

TEST(ShapeFactoryTest, SquareArea) {
    auto shape = ShapeFactory::createShape("square", 3.0);
    EXPECT_DOUBLE_EQ(shape->area(), 9.0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
