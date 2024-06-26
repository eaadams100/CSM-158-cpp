#include <iostream>

int main() {
    int a = 5;
    int b = 5;

    // Demonstrating ++i (pre-increment)
    std::cout << "Using ++i (pre-increment):\n";
    for (int i = 0; i < 3; ++i) {
        std::cout << "Before increment: a = " << a << ", i = " << i << std::endl;
        std::cout << "After increment: a = " << ++a << ", i = " << i << std::endl;
    }

    std::cout << std::endl;

    // Demonstrating i++ (post-increment)
    std::cout << "Using i++ (post-increment):\n";
    for (int i = 0; i < 3; i++) {
        std::cout << "Before increment: b = " << b << ", i = " << i << std::endl;
        std::cout << "After increment: b = " << b++ << ", i = " << i << std::endl;
    }

    std::cout << "\nFinal values: a = " << a << ", b = " << b << std::endl;

    return 0;
}