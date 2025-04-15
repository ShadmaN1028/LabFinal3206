#include "hello_world.cpp"
#include <gtest/gtest.h>

TEST(HelloWorldTest, ReturnsCorrectString) {
    EXPECT_EQ(helloWorld(), "Hello, World!");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
