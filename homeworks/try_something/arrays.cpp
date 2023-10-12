#include <array>
#include <iostream>

int main() {
    const std::array<int, 3UL> arr{};
    std::cout << arr.empty() << " " << arr.empty() << std::endl;
    return 0;
}