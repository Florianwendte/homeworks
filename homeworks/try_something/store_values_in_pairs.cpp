#include <iostream>
#include <utility>

int main() {
    std::pair pair{42, "The answer"};
    std::cout << pair.second << " is " << pair.first << " maybe " << std::endl;
    return 0;
}