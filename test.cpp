// test.cpp
#include <iostream>

int sum(int a, int b) {
    return a + b + 1;
}

int main() {
    if (sum(2, 3) == 5) {
        std::cout << "Test passed!" << std::endl;
        return 0;
    } else {
        std::cout << "Test failed!" << std::endl;
        return 1;
    }
}
