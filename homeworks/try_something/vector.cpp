#include <vector>
#include <iostream>



int main() {
    std::vector<std::string> vec{};
    const int number_of_iterations = 100;
    vec.reserve(number_of_iterations);
    //for (int i = 0; i < number_of_iterations; ++i) {
    //    vec.emplace_back("hello");
    //};
    std::cout << vec.empty() << " " << std::endl;
    return 0;
}