#include <cstdio>
#include <limits>

constexpr int kMeaningOfLife { 42 };

int main() {
  double uninitialized_variable;
  std::printf("Result of Operation: %lu\n", 
                23UL-42UL);
  return 0;
}