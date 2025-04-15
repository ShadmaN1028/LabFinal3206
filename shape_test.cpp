#include <gtest/gtest.h>
#include "../shape_factory.h"

TEST(ShapeFactoryTest, CircleArea) {
    auto shape = ShapeFactory::createShape("circle", 2.0);
    EXPECT_NEAR(shape->area(), 12.5664, 0.0001);
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
