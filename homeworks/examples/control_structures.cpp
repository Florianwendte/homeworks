#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <random>

int main () {
    std::random_device random_device;
    std::mt19937 random_engine{random_device()};
    std::uniform_real_distribution<> distribution{23.0, 42.0};

    for (auto i = 0; i < 5; ++i) {
        std::cout << distribution(random_engine) << std::endl;
    };
    return 0;
}