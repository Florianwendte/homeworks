#include <limits>
#include <cstdio>

int main() {
    std::printf("Min: %d, max: %d\n",
        std::numeric_limits<int>::min(),
        std::numeric_limits<int>::max());
    return 0;
}