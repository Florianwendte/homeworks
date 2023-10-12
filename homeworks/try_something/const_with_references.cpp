#include <cstdio>

int main() {
    int number = 42;
    int& ref = number;
    const int& const_ref = number;
    std::printf("ref: %d, const_ref: %d\n", ref, const_ref);
    ref = 0;
    std::printf("ref: %d, const:ref: %d\n", ref, const_ref);
    number = 23;
    std::printf("ref: %d, const_ref: %d\n", ref, const_ref);
    return 0;
}